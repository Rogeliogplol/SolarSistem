//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include"AstroEsferico.h"
#include <assert.h>
#include <osg/TexGen>

AstroEsferico::AstroEsferico(std::string ruta, float radio):osg::Group(){

    crearAstro(ruta, radio);

}

void AstroEsferico::crearAstro(std::string ruta, float radio){

    rotacionMisma = new osg::MatrixTransform();

    astro = new sphere(ruta, radio);
    
    rotacionMisma->addChild(astro);
    
    this->addChild(rotacionMisma);
    
    rotacion = new Rotacion(0,0,1,0.5);
    rotacionMisma->setUpdateCallback( rotacion );
    rotacionMisma->setDataVariance( osg::Object::DYNAMIC );

}

