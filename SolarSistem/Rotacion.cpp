//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include "Rotacion.h"
#include <math.h>
#include <iostream>
Rotacion::Rotacion(float x, float y, float z, float v){
	vel=v;
	vector.x()=x;
	vector.y()=y;
	vector.z()=z;
	rot=0;
	enMovimiento=1;
}
void Rotacion::operator()(osg::Node *node, osg::NodeVisitor *nv) {
    if(enMovimiento){
	rot+=vel*((float)M_PI/180);
	osg::MatrixTransform* nodo = dynamic_cast<osg::MatrixTransform*>(node);
	if(nodo!=0L)
		nodo->setMatrix(osg::Matrixf::rotate(rot,vector));
	traverse( node, nv );
	}
}
void Rotacion::setVelocidad(float v){
	vel=v;
}

void Rotacion::cambiarEstadoAnimacion(){
	enMovimiento= (enMovimiento+1)%2;
}
