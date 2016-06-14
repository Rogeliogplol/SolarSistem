cmake_minimum_required(VERSION 2.8)
if(COMMAND cmake_policy)
      cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

PROJECT(sistem)

FIND_PACKAGE(OpenSceneGraph  COMPONENTS osgViewer osgUtil osgGA osgDB osgText osgParticle)

SET(TARGET_SRC sistema.cpp sphere.cpp AstroEsferico.cpp Estrella.cpp Planeta.cpp Satelite.cpp Rotacion.cpp escena.cpp gestorDeEventos.cpp RotacionSobre.cpp)
LINK_LIBRARIES ( ${OPENSCENEGRAPH_LIBRARIES} )
LINK_DIRECTORIES ( ${OPENSCENEGRAPH_LIB_DIRS} )

include_directories (${OPENSCENEGRAPH_INCLUDE_DIRS})
add_executable (sistem ${TARGET_SRC} ) 
