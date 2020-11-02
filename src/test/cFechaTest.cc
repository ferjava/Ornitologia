#include "cFecha.hpp"
#include "cExcepcion.hpp"
/**
 * Contiene los test de clase Cfecha 
*/


#include "CppUTest/TestHarness.h"


TEST_GROUP(cFecha)
{
  ///Crearemos   los apuntadores a los objetos 
    fjv::control::cFecha* a ,*b ,*c;

  void setup()
  {
      
    //Creamos Fechas Correctas   
    a = new fjv::control::cFecha(10,2,2020);
    b = new fjv::control::cFecha(12,7,1975);
    c = new fjv::control::cFecha(14,6,1978);
  }
  void teardown()
  {
    
    delete a;
    delete b;
    delete c;
  }
};

TEST(cFecha, Create)
{
  CHECK(0 != a);
  CHECK(0 != b);
  CHECK(0 != c);
}
TEST(cFecha, GetCheck)
{
    CHECK(10 == a->get_dia());
    CHECK(2 == a->get_mes());
    CHECK(2020 == a->get_anno());
    //Segunda fecha 
    CHECK(12 == b->get_dia());
    CHECK(7 == b->get_mes());
    CHECK(1975 == b->get_anno());
    //Tercera fecha
    CHECK(14 == c->get_dia());
    CHECK(6 == c->get_mes());
    CHECK(1978 == c->get_anno());
}
TEST(cFecha , cFechaExcepcion)
{
    //Lanza Exceppcion por pasar el dia > 31  todos meses
    CHECK_THROWS(fjv::ExFechaError , a->set_dia(49));
    //Lanza Excepcion por pasar el mes > 12
    CHECK_THROWS(fjv::ExFechaError , b->set_mes(13));
    //Lanza Excepcion si pasamos el dia > 30 en mes de 30 dias
    c->set_mes(4);
    CHECK_THROWS(fjv::ExFechaError , c->set_dia(31));
    //Lanza Excepcion si pasamos dia > 28 en febrero
    a->set_mes(2);
    a->set_anno(2021);
    CHECK_THROWS(fjv::ExFechaError , a->set_dia(29));
    //si es bisiesto chequeamos  que contiene el dia 29
    a->set_anno(2020);//Año bisisesto 
    a->set_dia(29);
    CHECK(29 == a->get_dia());
    CHECK_THROWS(fjv::ExFechaError ,a->set_dia(30));
    
}
TEST(cFecha , cFechaString)
{
    a->set_dia(12);
    a->set_mes(7);
    a->set_anno(1975);
    
    CHECK(0 == (a->to_string()).compare("12/7/1975"));
    b->set_dia(29);
    b->set_mes(2);
    b->set_anno(2020);
    
    CHECK(0 == (b->to_string()).compare("29/2/2020"));
    
    
}
    
