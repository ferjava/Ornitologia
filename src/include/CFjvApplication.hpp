#ifndef D_CFjvApplication_H
#define D_CFjvApplication_H

#include <string>
///////////////////////////////////////////////////////////////////////////////
//
//  CFjvApplication is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////
namespace  fjv
{
class CFjvApplication
  {
  public:
    explicit CFjvApplication();
    virtual ~CFjvApplication();
    /**
     * @brief Se crean  los objetos de la aplicaion
     **/
    virtual void On_Setup();
    /**
      * @brief  Funcion Iniciar la aplicacion
      **/
    virtual void Init();
    virtual void Update();
    virtual void Exit();
    void set_Name(std::string value){_m_titulo = value;};
    void set_Version_string(std::string value){_m_version_str = value;};

  private:

    CFjvApplication(const CFjvApplication&);
    CFjvApplication& operator=(const CFjvApplication&);
  private:
  std::string _m_titulo;
  std::string _m_version_str ;


  };
}
#endif  // D_CFjvApplication_H
