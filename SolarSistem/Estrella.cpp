//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include"Estrella.h"
#include <assert.h>
#include <osg/TexGen>

Estrella::Estrella(std::string ruta, float radio):AstroEsferico(ruta, radio){

    estrella = new AstroEsferico(ruta, radio);
    
    this->addChild(estrella);
    

}

void Estrella::addPlaneta (osg::ref_ptr<Planeta> p,  int x,int y,int z, float velocidad){

    //RotacionSobre *r;
    osg::ref_ptr<osg::Transform> rS;
    
    rS = new  osg::MatrixTransform();
    
    misPlanetas.push_back(p);   
    osg::ref_ptr<osg::Transform> PlanetaPosicionado=new osg::MatrixTransform(osg::Matrix::translate(x,y,z));
    PlanetaPosicionado->addChild(p);
    
    rS->addChild(PlanetaPosicionado);
    
    
    

    rS->setUpdateCallback( new RotacionSobre(0,0,1,velocidad) );
    rS->setName("astro");
    rS->setDataVariance( osg::Object::DYNAMIC );
    
    this->addChild(rS);
    

}
