//**************************************************************************
// Práctica SG
//
// José Luis Fernandez Bueno y Rogelio Garcia Peña
//
//
//**************************************************************************
#include "escena.h"


escena::escena():osg::Group(){

    osg::ref_ptr<Estrella> root = new Estrella("Texturas/sun.rgb",6.5f);
	root->setName("sol");
	
	
    osg::ref_ptr<Planeta> mercurio = new Planeta ("Texturas/mercurio.rgb",0.4f);
    //mercurio->setName("astro");
    root->addPlaneta(mercurio, 10, 0, 0, 0.3);
    
    osg::ref_ptr<Planeta> venus = new Planeta ("Texturas/venus.rgb",0.95f);
    //venus->setName("astro");
    root->addPlaneta(venus, 13, 0, 0, 0.4);
    
    osg::ref_ptr<Planeta> tierra = new Planeta ("Texturas/tierra.rgb", 1.0f);
    //tierra->setName("astro");
        osg::ref_ptr<Satelite> luna = new Satelite ("Texturas/luna.rgb",0.3f);
        //luna->setName("astro");
        tierra->addSatelite(luna, 3, 0, 0, 1.0);
    root->addPlaneta(tierra, 18, 0, 0, 0.5);
    
    osg::ref_ptr<Planeta> marte = new Planeta ("Texturas/marte.rgb",0.6f);
    //marte->setName("astro");
        osg::ref_ptr<Satelite> fobos = new Satelite ("Texturas/fobos.rgb", 0.25f);
        //fobos->setName("astro");
        marte->addSatelite(fobos, 3, 0, 0, 1.0);
        osg::ref_ptr<Satelite> deimos = new Satelite ("Texturas/deimos.rgb", 0.2f);
        //deimos->setName("astro");
        marte->addSatelite(deimos, 6, 0, 0, 1.5);
    root->addPlaneta(marte, 29, 0, 0, 0.52);
    
    osg::ref_ptr<Planeta> jupiter = new Planeta ("Texturas/jupiter.rgb", 3.3f);
    //jupiter->setName("astro");
        osg::ref_ptr<Satelite> io = new Satelite ("Texturas/io.rgb", 0.32f);
        //io->setName("astro");
        jupiter->addSatelite(io, 3, 0, 0, 1.0);
        osg::ref_ptr<Satelite> europa = new Satelite ("Texturas/europa.rgb", 0.28f);
        //europa->setName("astro");
        jupiter->addSatelite(europa, 6, 0, 0, 1.2);
        osg::ref_ptr<Satelite> calisto = new Satelite ("Texturas/calisto.rgb", 0.5f);
        //calisto->setName("astro");
        jupiter->addSatelite(calisto, 9, 0, 0, 1.6);
    root->addPlaneta(jupiter, 49, 0, 0, 0.23);
    
    osg::ref_ptr<Planeta> saturno = new Planeta ("Texturas/saturno.rgb",3.0f);
    //saturno->setName("astro");
    root->addPlaneta(saturno, 63, 0, 0, 0.24);
    
    osg::ref_ptr<Planeta> urano = new Planeta ("Texturas/urano.rgb", 1.85f);
    //urano->setName("astro");
        osg::ref_ptr<Satelite> titania = new Satelite ("Texturas/titania.rgb", 0.23f);
        //titania->setName("astro");
        urano->addSatelite(titania, 3, 0, 0, 1.4);
        osg::ref_ptr<Satelite> ariel = new Satelite ("Texturas/ariel.rgb", 0.21f);
        //ariel->setName("astro");
        urano->addSatelite(ariel, 6, 0, 0, 2.0);
        osg::ref_ptr<Satelite> miranda = new Satelite ("Texturas/miranda.rgb", 0.18f);
        //miranda->setName("astro");
        urano->addSatelite(miranda, 9, 0, 0, 1.0);
    root->addPlaneta(urano, 77, 0, 0, 0.3);
    
    osg::ref_ptr<Planeta> neptuno = new Planeta ("Texturas/neptuno.rgb", 1.9f);
    //neptuno->setName("astro");
        osg::ref_ptr<Satelite> triton = new Satelite ("Texturas/triton.rgb", 0.28f);
        //triton->setName("astro");
        neptuno->addSatelite(triton, 3, 0, 0, 1.0);
    root->addPlaneta(neptuno, 94, 0, 0, 0.25);
    
    this->addChild(root);


}
