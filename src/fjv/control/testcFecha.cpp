/**
* @brief Archivo de implementacion del test de cFecha
**/

#include "testcFecha.hpp"
#include "cExcepcion.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(cFecha_Test);
void cFecha_Test::setUp(void)
{
    //Inicializamos los objetos
    //Todas las fechas son correctas
    a = new fjv::control::cFecha(10,4,1998);
    b = new fjv::control::cFecha(29,2,2020);
    c = new fjv::control::cFecha(12,7,1975);
    d = new fjv::control::cFecha(25,12,2000);
}
void cFecha_Test::tearDown()
{
    delete a;
    delete b;
    delete c;
    delete d;
}
void cFecha_Test::cFecha_get()
{
    //Comprobamos que tengan los datos que añadimos
    CPPUNIT_ASSERT(10 == a->get_dia());
    CPPUNIT_ASSERT(4 == a->get_mes());
    CPPUNIT_ASSERT(1998 == a->get_anno());
    CPPUNIT_ASSERT(29 == b->get_dia());
    CPPUNIT_ASSERT(2 == b->get_mes());
    CPPUNIT_ASSERT(2020 == b->get_anno());
    CPPUNIT_ASSERT(12 == c->get_dia());
    CPPUNIT_ASSERT(7 == c->get_mes());
    CPPUNIT_ASSERT(1975 == c->get_anno());
    CPPUNIT_ASSERT(25 == d->get_dia());
    CPPUNIT_ASSERT(12 == d->get_mes());
    CPPUNIT_ASSERT(2000 == d->get_anno());
    }
void cFecha_Test::cFecha_set()
{
    //Comprobamos si cambiamos bien las fechas correctas
     a->set_dia(15);
     a->set_anno(100);
     b->set_mes(6);
     b->set_anno(1900);
     c->set_dia(9);
     c->set_mes(3);
     d->set_anno(2001);
     d->set_dia(4);
    CPPUNIT_ASSERT( 15 == a->get_dia());
    CPPUNIT_ASSERT(100 == a->get_anno());
    CPPUNIT_ASSERT(6 == b->get_mes());
    CPPUNIT_ASSERT(1900 == b->get_anno());
    CPPUNIT_ASSERT(9 == c->get_dia());
    CPPUNIT_ASSERT(3 == c->get_mes());
    CPPUNIT_ASSERT(2001 == d->get_anno());
    CPPUNIT_ASSERT(4 == d->get_dia());
    
    
     
}
void cFecha_Test::cFecha_Exception()
{
    //probaremos la cFecha_Exception
    CPPUNIT_ASSERT_THROW(a->set_dia(40),fjv::ExFechaError);
    CPPUNIT_ASSERT_THROW(a->set_mes(13),fjv::ExFechaError);
    //CPPUNIT_ASSERT_THROW(b->set_anno(10),fjv::ExFechaError);
    //probamos si febrero puede de tener mas de 28 dias
    c->set_anno(2021);//no es bisiesto
    c->set_mes(2);
    CPPUNIT_ASSERT_THROW(c->set_dia(29),fjv::ExFechaError);
    //Probamos si el año bisiesto admite mas de 29 dias
    c->set_anno(2020);//es bisisesto 
    CPPUNIT_ASSERT_THROW(c->set_dia(30),fjv::ExFechaError);
    //Probamos algun mes de 30 dias
    d->set_mes(4);
    CPPUNIT_ASSERT_THROW(d->set_dia(31),fjv::ExFechaError);
    d->set_mes(6);
    CPPUNIT_ASSERT_THROW(d->set_dia(31),fjv::ExFechaError);
    d->set_mes(9);
    CPPUNIT_ASSERT_THROW(d->set_dia(31),fjv::ExFechaError);
    d->set_mes(11);
    CPPUNIT_ASSERT_THROW(d->set_dia(31),fjv::ExFechaError);
    
}

    
