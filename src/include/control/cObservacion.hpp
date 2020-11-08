#ifndef COBSERVACION_HPP
#define COBSERVACION_HPP

/**
  * @file cObservacion.hpp
  * @brief Contiene la declaracion de los objetos cObservacion
  * @version 0.1
  */

#include "cFecha.hpp"
#include <string>

namespace fjv
{
 namespace control
 {
  /**
  * @class cObserbacion
  * @brief Contiene la informacion de una Observacion
  * (persona , lugar , fecha , pajaro )
  *
  **/
  class cObservacion
  {
   private:
   //Atributos
   cFecha * _m_fecha;    
   std::string  m_Pajaro , m_Fecha , m_Lugar , m_Persona;
   public:
   //Get Set
   void set_Pajaro (std::string pajaro_value);
   void set_Lugar  (std::string lugar_value);
   void set_Persona (std::string persona_value);
   void set_Fecha (int dia_value , int mes_value , int year_value); //* formato : dd/mm/yyyy
   std::string get_Pajaro();
   std::string get_Lugar ();
   std::string get_Persona();
   std::string get_Fecha();
    //constructores
    //cObservacion();//Constructor vacio
    cObservacion(std::string pajaro_value , std::string lugar_value , std::string persona_value ,
    			int dia_value , int mes_value , int year_value);
    virtual ~cObservacion();

  };
 }
}


#endif //COBSERVACION_HPP


