#ifndef _C_EXCEPCION_
#define _C_EXCEPCION_
 /**
 * @brief : Este archivo contiene la declaracion de Excepciones
 * creadas para este proyecto
 * @autor : ferjava
 * @version 0.1
 **/
#include <string>

namespace fjv
{
class ExBase
{
  virtual  std::string MostrarCausa()
  {
   return "Excepcion Base";
  };
};
class ExFechaError : public ExBase
{
 virtual std::string MostrarCausa()
 {
  return "Fecha Erronea";
 };
};
}


#endif //_C_EXCEPCION_
