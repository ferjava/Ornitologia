#ifndef D_CAppTest_H
#define D_CAppTest_H

///////////////////////////////////////////////////////////////////////////////
//
//  CAppTest is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////
#include "CFjvApplication.hpp"
#include "control/cObservacion.hpp"

#include <list>


class CAppTest : public fjv::CFjvApplication
  {
  public:
    explicit CAppTest();
    virtual ~CAppTest();
    virtual void Init()override;
    virtual void Update()override;
    virtual void Exit()override;

  protected:
     void Pantalla_Inicio();
     void Pantalla_AddObservacion();
<<<<<<< HEAD
     void Pantall_MostrarObserv();
=======
     void Pantalla_MostrarObserv();
>>>>>>> cambios para c++20
  private:
     std::list<fjv::control::cObservacion*>lista_observacion;
     fjv::control::cObservacion* swap_obser = nullptr;//FIXME:Se necesita
    // de intercambio


    CAppTest(const CAppTest&);
    CAppTest& operator=(const CAppTest&);

  };

#endif  // D_CAppTest_H
