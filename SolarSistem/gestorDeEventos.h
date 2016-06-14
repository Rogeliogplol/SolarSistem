//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#ifndef GESTORDEEVENTOS_H_
#define GESTORDEEVENTOS_H_
#include "escena.h"
#include "RotacionSobre.h"

class GestorDeEventos : public osgGA::GUIEventHandler{
private:
	osg::ref_ptr<escena> es;
	bool pulsado;
public:
	GestorDeEventos(osg::ref_ptr<escena> e);
	virtual bool handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
};

#endif /* GESTORDEEVENTOS_H_ */
