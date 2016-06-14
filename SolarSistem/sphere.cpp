//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************

#include "sphere.h"
#include <assert.h>
#include <osg/TexGen>

sphere::sphere(std::string ruta,float radio):osg::Group(){


    esfera = new osg::Geode();
    // ---------------------------------------
    // Set up a StateSet to texture the objects
    // ---------------------------------------
    osg::ref_ptr<osg::StateSet> stateset = new osg::StateSet();

    osg::ref_ptr<osg::Image> image = osgDB::readRefImageFile( ruta );
    if (image)
    {
        //std::cout << "Imagen" << std::endl;
        osg::ref_ptr<osg::Texture2D> texture = new osg::Texture2D;
        texture->setImage(image);
        texture->setFilter(osg::Texture::MIN_FILTER, osg::Texture::LINEAR);
        stateset->setTextureAttributeAndModes(0,texture, osg::StateAttribute::ON);
    }

    //stateset->setMode(GL_LIGHTING, osg::StateAttribute::ON);

    esfera->setStateSet( stateset );


    osg::ref_ptr<osg::TessellationHints> hints = new osg::TessellationHints;
    hints->setDetailRatio(1.0f);

    esfera->addDrawable(new osg::ShapeDrawable(new osg::Sphere(osg::Vec3(0.0f,0.0f,0.0f),radio),hints));

    this->addChild(esfera);

}
