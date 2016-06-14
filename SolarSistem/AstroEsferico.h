//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#ifndef ASTRO_H
#define ASTRO_H

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
#include "Rotacion.h"

class AstroEsferico : public osg::Group
{
private:

    Rotacion *rotacion;
    osg::ref_ptr<osg::Transform> rotacionMisma;
    osg::ref_ptr<sphere> astro;
    
public:

    AstroEsferico (std::string ruta, float radio);
    void crearAstro (std::string ruta, float radio);
};

#endif
