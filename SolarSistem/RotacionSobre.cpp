//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include "RotacionSobre.h"
#include <math.h>
#include <iostream>
#include <cstdlib>
RotacionSobre::RotacionSobre(float x, float y, float z, float v){
	vel=v;
	vector.x()=x;
	vector.y()=y;
	vector.z()=z;
	rot=0;
	enMovimiento=1;
	std::cout<<enMovimiento<<std::endl;
}
void RotacionSobre::operator()(osg::Node *node, osg::NodeVisitor *nv) {
    if(enMovimiento){
	rot+=vel*((float)M_PI/180);
	osg::MatrixTransform* nodo = dynamic_cast<osg::MatrixTransform*>(node);
	if(nodo!=0L)
		nodo->setMatrix(osg::Matrixf::rotate(rot,vector));
	traverse( node, nv );
	}
}
void RotacionSobre::setVelocidad(float v){
	vel=v;
}

void RotacionSobre::cambiarEstadoAnimacion(){
    std::cout<<"cambiar estado de "<<std::endl;
    std::cout<< enMovimiento <<std::endl;
	enMovimiento= (enMovimiento+1)%2;
	std::cout<<"cambiar estado a "<< enMovimiento<<std::endl;
}
