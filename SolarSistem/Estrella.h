//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#ifndef ESTRELLA_H
#define ESTRELLA_H

#include <vector>
#include <iostream>
#include <osg/Notify>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>
#include <osg/Material>
#include <osgUtil/ShaderGen>
#include <osg/Math>
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
#include "sphere.h"
#include "AstroEsferico.h"
#include "Planeta.h"
#include "RotacionSobre.h"

class Estrella : public AstroEsferico
{
private:

    RotacionSobre *rotacion;
    osg::ref_ptr<osg::Transform> rotacionSobre;
    std::vector<osg::ref_ptr<Planeta> > misPlanetas;
    osg::ref_ptr<AstroEsferico> estrella;
    
public:

    Estrella (std::string ruta, float radio);
    void addPlaneta(osg::ref_ptr<Planeta> p, int x,int y,int z, float velocidad);
};

#endif
