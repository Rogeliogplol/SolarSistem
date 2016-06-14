//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#ifndef ROTACIONSOBRE_H_
#define ROTACIONSOBRE_H_
#include <osg/MatrixTransform>

class RotacionSobre : public osg::NodeCallback {
private:
	float vel,rot;
	osg::Vec3f vector;
	int enMovimiento;
public:
	RotacionSobre(float x, float y, float z, float v);
	void operator()(osg::Node *node, osg::NodeVisitor *nv);
	void setVelocidad(float v);
	void cambiarEstadoAnimacion();
};

#endif /* ROTACION_H_ */
