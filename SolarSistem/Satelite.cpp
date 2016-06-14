//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include"Satelite.h"
#include <assert.h>
#include <osg/TexGen>

Satelite::Satelite(std::string ruta, float radio):AstroEsferico(ruta, radio){
    
    satelite = new AstroEsferico(ruta, radio);

    
    this->addChild(satelite);


}

void Satelite::setRotacion(RotacionSobre *r){
    rotacion = rotacion;
}



void Satelite::setRotacionSobre(osg::ref_ptr<osg::Transform> rS){
    rotacionSobre = rS;

}
