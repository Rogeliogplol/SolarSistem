//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#ifndef SATELITE_H
#define SATELITE_H

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
#include "RotacionSobre.h"

class Satelite : public AstroEsferico
{
private:
    RotacionSobre *rotacion;
    osg::ref_ptr<osg::Transform> rotacionSobre;
    osg::ref_ptr<AstroEsferico> satelite;
    
public:

    Satelite (std::string ruta, float radio);
    void setRotacion(RotacionSobre *r);
    void setRotacionSobre(osg::ref_ptr<osg::Transform> rS);
};

#endif
