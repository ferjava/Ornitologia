#include "CFjvApplication.hpp"
#include <iostream>
namespace fjv
{
CFjvApplication::CFjvApplication()
{
    // Crea la aplicacion
}

CFjvApplication::~CFjvApplication()
{
}
void CFjvApplication::On_Setup()
{
    //Funcion para crear los objetos

}
void CFjvApplication::Init()
{
    std::cout << std::endl;
    std::cout <<"Aplicacion: "<< _m_titulo << std::endl;
    std::cout <<"Version   : "<< _m_version_str << std::endl;
}

void CFjvApplication::Exit()
{
}
void CFjvApplication::Update()
{
}
}//en namespace
