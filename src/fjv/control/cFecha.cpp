/**
 * @brief: Este arcivo contiene  la implementacion de la clase cFecha
 * @autor ferjava
 * @versio 0.1
 **/
#include <iostream>
#include "control/cFecha.hpp"
#include "control/cExcepcion.hpp"
namespace fjv
{
    namespace control
    {
        /**
         * @brief Comprueba que el dia es entre 1 y (28-30-31)segun el mes o (29) segun el año
         *
         */
<<<<<<< HEAD
        void cFecha::set_dia(uint dia_value)
=======
        void cFecha::set_dia(unsigned int dia_value)
>>>>>>> cambios para c++20
        {
            //Comprobamos el valor entre 1 y 31
            if(dia_value <= 0 || dia_value > 31)
            {
                throw ExFechaError();
            }
            if(dia_value > 0 && dia_value <=31)
            {
<<<<<<< HEAD
               uint tmp_mes = this->get_mes();
=======
               unsigned int tmp_mes = this->get_mes();
>>>>>>> cambios para c++20
              switch(tmp_mes)
              {
                  case 1:
                  case 2:
                     {
<<<<<<< HEAD
                      uint tmp_anno = this->get_anno();
                      uint dia_feb = 28;
=======
                      unsigned int tmp_anno = this->get_anno();
                      unsigned int dia_feb = 28;
>>>>>>> cambios para c++20
                      if( ((tmp_anno % 4) == 0 && (tmp_anno % 100)!=0)
                      || (tmp_anno % 400) == 0)
                      {

                          dia_feb = 29;
                      }
                      if (dia_value > dia_feb)
                      {
                        throw ExFechaError();
                      }
                     }
                      break;
                  case 3:
                  case 4:
                      {
                        if(dia_value == 31)
                        {
                        throw  ExFechaError();
                        }
                      }
                      break;
                  case 5:
                  case 6:
                       {
                        if(dia_value == 31)
                        {
                        throw  ExFechaError();
                         }
                         break;
                       }
                  case 7:
                  case 8:
                  case 9:
                       {
                        if(dia_value == 31)
                         {
                         throw  ExFechaError();
                         }
                       }
                      break;
                  case 10:
                  case 11:
                       { if(dia_value == 31)
                        {
                         throw  ExFechaError();
                         }
                       }
                      break;
                  case 12 :
                      break;
              }

            }
            _m_dia = dia_value;

        }
        /**
         * @brief Comprueba si el valor introducido es del 1 al 12
         *
         * @param mes_value
         */
<<<<<<< HEAD
       void cFecha::set_mes(uint mes_value)
=======
       void cFecha::set_mes(unsigned int mes_value)
>>>>>>> cambios para c++20
       {
           while( mes_value <= 0 || mes_value > 12)
           {
               throw ExFechaError();
           }
            _m_mes= mes_value;

       }
       /**
        * @brief Introduce el año de la  fecha
        *
        * @param anno_value
        */
<<<<<<< HEAD
        void cFecha::set_anno(uint anno_value)
=======
        void cFecha::set_anno(unsigned int anno_value)
>>>>>>> cambios para c++20
       {
           _m_year =  anno_value;
       }
        /**
         * @brief Construct a new cFecha::cFecha object
         *
         * @param dia_value
         * @param mes_value
         * @param year_value
         */
<<<<<<< HEAD
       cFecha::cFecha(uint dia_value , uint mes_value , uint year_value)
=======
       cFecha::cFecha(unsigned int dia_value , unsigned int mes_value , unsigned int year_value)
>>>>>>> cambios para c++20
       {


             set_anno(year_value);
             set_mes(mes_value);
             set_dia(dia_value);

       }
       std::string cFecha::to_string()
       {
           std::string  str_fecha =  std::to_string(_m_dia) + "/"+ std::to_string(_m_mes)+"/"+std::to_string(_m_year);
           return str_fecha;
       }



    }

}
