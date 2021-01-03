#ifndef _C_FECHA_
#define _C_FECHA_

/**
* @brief: Clase de  encargada de  comprobar si la fecha es correcta y tambien
* regresa una cadena en formato dd/mm/yyyy
* @autor ferjava
* @version 0.1
*/
#include <string>
namespace fjv
{
  namespace control
  {
    class cFecha
    {
     private:
<<<<<<< HEAD
     uint _m_dia = 0 , _m_mes = 0 , _m_year = 0 ;
     public:
     //get
     uint get_dia () {return _m_dia;};
     uint get_mes () {return _m_mes;};
     uint get_anno() {return _m_year;};
     //set
     void set_dia(uint dia_value);
     void set_mes(uint mes_value);
     void set_anno(uint anno_value);
     //Contructor
     cFecha(uint dia_value , uint mes_value , uint year_value);
=======
     unsigned int _m_dia = 0 , _m_mes = 0 , _m_year = 0 ;
     public:
     //get
     unsigned int get_dia () {return _m_dia;};
     unsigned int get_mes () {return _m_mes;};
     unsigned int get_anno() {return _m_year;};
     //set
     void set_dia(unsigned int dia_value);
     void set_mes(unsigned int mes_value);
     void set_anno(unsigned int anno_value);
     //Contructor
     cFecha(unsigned int dia_value , unsigned int mes_value , unsigned int year_value);
>>>>>>> cambios para c++20
      /**
      * @brief Convierte la fecha en una cadena en formato dd/mm/yyyy
      **/
     std::string to_string();
     /**
     * @brief chequea la fecha si es correcta .Si el dia esta entre 1-31 max
     * mes de 1-12 y el año es mayor de 0
     * @return true si es correcto y false si erroneo algun de parametros de la
     * fecha
     **/
     bool check();


    };
  }
}



#endif //_C_FECHA_
