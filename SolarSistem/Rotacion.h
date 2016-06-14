//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#ifndef ROTACION_H_
#define ROTACION_H_
#include <osg/MatrixTransform>

class Rotacion : public osg::NodeCallback {
private:
	float vel,rot;
	osg::Vec3f vector;
	int enMovimiento;
public:
	Rotacion(float x, float y, float z, float v);
	void operator()(osg::Node *node, osg::NodeVisitor *nv);
	void setVelocidad(float v);
	void cambiarEstadoAnimacion();
};

#endif /* ROTACION_H_ */
