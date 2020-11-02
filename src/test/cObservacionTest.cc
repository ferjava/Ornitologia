#include "cObservacion.hpp"
#include "cExcepcion.hpp"


/** 
 * Contiene los test de la clase cObservacion
 * */

#include "CppUTest/TestHarness.h"

TEST_GROUP(cObservacion)
{
    fjv::control::cObservacion *a , *b ;
    void setup()
    {
        //Creamos los objetos 
        a = new fjv::control::cObservacion("Gorrion","Alagon","Fernando",12,7,1975);
        b = new fjv::control::cObservacion("Paloma","Casetas","Miguel",14,6,1978);
    }
    void teardown()
    {
        delete a;
        delete b;
        //delete c;
    }
};
TEST(cObservacion, Create)
{
    CHECK(0 != a);
    CHECK(0 != b);
}
TEST(cObservacion ,Get)
{
    CHECK(0 == (a->get_Fecha()).compare("12/7/1975"));
    CHECK(0 == (a->get_Lugar()).compare("Alagon"));
    CHECK(0 == (a->get_Pajaro()).compare("Gorrion"));
    CHECK(0 == (a->get_Persona()).compare("Fernando"));
    CHECK(0 == (b->get_Fecha()).compare("14/6/1978"));
    CHECK(0 == (b->get_Lugar()).compare("Casetas"));
    CHECK(0 == (b->get_Pajaro()).compare("Paloma"));
    CHECK(0 == (b->get_Persona()).compare("Miguel"));
    
}
TEST(cObservacion , Set)
{
    a->set_Fecha(8,7,2009);
    CHECK(0 == (a->get_Fecha()).compare("8/7/2009"));
    a->set_Pajaro("Gavilan");
    CHECK(0 == (a->get_Pajaro()).compare("Gavilan"));
    b->set_Persona("Vanesa");
    CHECK(0 == (b->get_Persona()).compare("Vanesa"));
    b->set_Lugar("Zaragoza");
    CHECK(0 == (b->get_Lugar()).compare("Zaragoza"));
}
TEST(cObservacion, Excepciones)
{
     //Creando un objeto con uns fecha erronea
   /* CHECK_THROWS(fjv::ExFechaError , c = new fjv::control::cObservacion("Aguila","Cabañas","Angel",44,2,200));*/
    //Excepcion por reasiganar una fecha erronea
    CHECK_THROW(fjv::ExFechaError , a->set_Fecha(288,13,299));
}
    
    
    
