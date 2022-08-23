#include "CAppTest.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include "control/cObservacion.hpp"

/**
 * brief:  Aplicacion base en consola para
 * comprobar las clases
 **/
CAppTest::CAppTest()
{

}
 CAppTest::~CAppTest()
{
}
/**
Pantalla Inicio contiene un menu para
la seleccion de add una Observacion
o listar las observaciones
**/
 void CAppTest::Pantalla_Inicio()
{
    // borra la pantalla
    std::system("clear");//para windows seria "cls"
    int opcion ;

    do{
        std::system("clear");
        fjv::CFjvApplication::Init();//Mostramos el nobre del proyecto y la version
        std::cout << " Menu de Opciones " << std::endl;
        std::cout << "1.Nueva Observacion" << std::endl;
        std::cout << "2.Lista de Observaciones" << std::endl;
        std::cout << "0.Salir" << std::endl;
        std::cout << "Ingresa una opcion";
        std::cin >> opcion;

        // Realizamos la opcion
        switch (opcion)
        {
            case 1:
                this->Pantalla_AddObservacion();
                break;
            case 2:
                this->Pantalla_MostrarObserv();
                break;


        }

    }while (opcion !=0);

}
/**
Pantalla de AddObservacion añade una nueva obervacion
a la lista de observaciones
**/
void CAppTest::Pantalla_AddObservacion()
{
    std::system("clear");//Borramos la pantalla
    std::string  pajaro, lugar ,avistador ;
    unsigned int dia,mes ,anno;
    std::cout << "NUEVA ENTRADA" << std::endl;
    std::cout << "Pajaro :";std::cin >> pajaro;
    std::cout << "Lugar  :";std::cin >> lugar;
    std::cout << "Persona:";std::cin >> avistador;
    std::cout << "Fecha:    " << std::endl;
    std::cout << "Dia :"; std::cin >> dia ;
    std::cout << "Mes :"; std::cin >> mes ;
    std::cout << "Año :"; std::cin >> anno ;
    fjv::control::cObservacion *obser =
    new fjv::control::cObservacion(pajaro,
    lugar , avistador, dia , mes, anno);
    //Menu para añadir la observacion  a la
    //Lista de observaciones
    char opcion ;

    do {
        std::cout << " (a) aceptar - (c) cancel  - (M) menu principal " << std::endl;
        std::cin >> opcion;
        switch (opcion)
        {
            case 'a':
                lista_observacion.push_back(obser);
                break;
            case 'c':
                
                Pantalla_AddObservacion();
        }

    }while (opcion != 'M');
    Pantalla_Inicio();
}
/**
Pantalla MostrarObserv Muestra las obervaciones
de la lista
**/
void CAppTest::Pantalla_MostrarObserv()
{


}
/**
Init se encarga del Cargar los objetos de
inicio de la aplicacion
**/
void CAppTest::Init()
{
    Pantalla_Inicio();
}
/**
Update se encarga de Actualizar la aplicacion
**/
void CAppTest::Update()
{}
/**
Exit Se encarga de todo lo relacionado con el cierre de
la aplicacion
**/
void CAppTest::Exit()
{
}
