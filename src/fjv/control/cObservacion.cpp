
#include "control/cObservacion.hpp"
#include "control/cExcepcion.hpp"
#include "control/cLog.hpp"

namespace fjv
{
    namespace control
    {
        /**
         *  @brief Asigna  el nombre del usuario que realizo el avistamiento
         * */
        void cObservacion::set_Persona(std::string value)
        {
            m_Persona = value;
        };
        /**
         * @brief Asigna el nombre del Pajaro avistado
         **/
         void cObservacion::set_Pajaro(std::string value )
         {
                m_Pajaro= value ;
         };
         /**
         * @brief Asigna  el nombre de la ciudad del avistamiento
         */
         void cObservacion::set_Lugar(std::string value )
         {
            m_Lugar= value ;
         };
         /**
         * @brief Asigna la fecha del avistamiento
         **/
         void cObservacion::set_Fecha(int dia_value, int mes_value, int year_value)
         {
            //TODO:realizar una cadena con los valores
            try
            {
            _m_fecha->set_dia(dia_value);
            _m_fecha->set_mes(mes_value);
            _m_fecha->set_anno(year_value);
            
            }
            catch(ExFechaError  &e)
            {
                e.MostrarCausa();
                throw fjv::ExFechaError();
            }
            m_Fecha = _m_fecha->to_string();
          };
         /**
          * @brief Recupera la fecha del actual avistamiento
          **/
         std::string cObservacion::get_Fecha()
         {
          return m_Fecha;
         };
          /**
          * @brief Recupera el nombre del Pajaro del actual avistamiento
          **/
         std::string cObservacion::get_Pajaro()
         {
            return m_Pajaro;
         };
          /**
          * @brief Recupera la Persona del actual avistamiento
          **/
         std::string cObservacion::get_Persona()
         {
             return m_Persona;
         };
          /**
          * @brief Recupera el Lugar del actual avistamiento
          **/
          std::string cObservacion::get_Lugar(){
          return m_Lugar;
          };
          /**
          * @brief Contructor vacio
          */
          cObservacion::cObservacion(std::string pajaro_value ,std::string lugar_value,std::string persona_value , int dia_value , int mes_value , int year_value)
          {
            m_Pajaro = pajaro_value;
            m_Lugar = lugar_value;
            m_Persona  = persona_value;
            try
            {
            _m_fecha = new cFecha(int(dia_value),int(mes_value),int(year_value));
            }
            catch(ExFechaError &e)
            {
                fjv::control::LOG->log("ERROR FECHA_NO_CORRECTA");
                e.MostrarCausa();
            }
            m_Fecha = _m_fecha->to_string();
          }
          cObservacion::~cObservacion()
          {
            delete _m_fecha;     
        }
       }
}      
