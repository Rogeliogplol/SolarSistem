//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#include "gestorDeEventos.h"
#include <string>
GestorDeEventos::GestorDeEventos(osg::ref_ptr<escena> e){
	es=e;
	pulsado=false;
}
bool GestorDeEventos::handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa ){
	if ( !es ) return false;

	if(ea.getButton()==osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON && ea.getEventType()!=osgGA::GUIEventAdapter::RELEASE ){
		osgViewer::Viewer* viewer = dynamic_cast<osgViewer::Viewer*>(&aa);

		if ( viewer ) {
			osg::ref_ptr<osgUtil::LineSegmentIntersector> intersector =
					new osgUtil::LineSegmentIntersector(
							osgUtil::Intersector::WINDOW, ea.getX(), ea.getY() );

			osgUtil::IntersectionVisitor iv( intersector.get() );

			// Sólo recorrer aquellos nodos con nodeMask=0x1
			iv.setTraversalMask( ~0x1 );

			viewer->getCamera()->accept( iv );

			if ( intersector->containsIntersections() ) {
				osg::NodePath nP = intersector->getFirstIntersection().nodePath;
				std::cout<<"-----------------------------------------------\nSeleccion"<<std::endl;
				for (int i = 0; i < nP.size(); i++) {
					std::cout<<"Nodo "<<i<<":"<<nP[i]->getName()<<std::endl;
					if(nP[i]->getName().compare("astro")==0){
						RotacionSobre *ani= dynamic_cast<RotacionSobre *>(nP[i]->getUpdateCallback());
						ani->cambiarEstadoAnimacion();
						
					}
				}
			}
		}
	}
	return false;


}
