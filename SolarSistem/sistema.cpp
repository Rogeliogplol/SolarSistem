//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#include <iostream>
#include <osg/Notify>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>
#include <osg/Material>
#include <osg/Light>
#include <osg/LightSource>
#include <osg/LightModel>
#include <osg/Billboard>
#include <osg/LineWidth>
#include <osg/TexEnv>
#include <osg/TexEnvCombine>
#include <osg/ClearNode>
#include <osgUtil/Optimizer>
#include <osgDB/Registry>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgGA/NodeTrackerManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/SphericalManipulator>
#include <osgViewer/Viewer>

#include "sphere.h"
#include "AstroEsferico.h"
#include "Estrella.h"
#include "escena.h"
#include "gestorDeEventos.h"

using namespace std;

int main() {
	osgViewer::Viewer viewer;
	
	osg::ref_ptr<escena> e = new escena();
    
    viewer.setSceneData( e );
    
    osg::ref_ptr<GestorDeEventos> gestorEventos = new GestorDeEventos (e.get());
    viewer.addEventHandler( gestorEventos.get() );

	return viewer.run();
}
