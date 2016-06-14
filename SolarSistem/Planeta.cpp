//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include"Planeta.h"
#include <assert.h>
#include <osg/TexGen>

Planeta::Planeta(std::string ruta, float radio):AstroEsferico(ruta, radio){
    
    planeta = new AstroEsferico(ruta, radio);
    
    
    this->addChild(planeta);
    
    
}

void Planeta::addSatelite (osg::ref_ptr<Satelite> s, int x,int y,int z, float velocidad){

    //RotacionSobre *r;
    osg::ref_ptr<osg::Transform> rS;
    
    rS = new  osg::MatrixTransform();

    misSatelites.push_back(s);
    osg::ref_ptr<osg::Transform> PlanetaPosicionado=new osg::MatrixTransform(osg::Matrix::translate(x,y,z));
    PlanetaPosicionado->addChild(s);
    
    rS->addChild(PlanetaPosicionado);
    
    rS->setUpdateCallback( new RotacionSobre(0,0,1,velocidad) );
    rS->setName("astro");
    rS->setDataVariance( osg::Object::DYNAMIC );
    
    this->addChild(rS);
}

void Planeta::setRotacion(RotacionSobre *r){
    rotacion = rotacion;
}



void Planeta::setRotacionSobre(osg::ref_ptr<osg::Transform> rS){
    rotacionSobre = rS;

}







