/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Un pequeño programa para probar la clase de fecha
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>
#include <iostream>
#include "cExcepcion.hpp"
#include "cFecha.hpp"
#define ESCAPE_KEY 27
int main ()
{
 ///Creamos las variables donde introduciremos las fechas
 uint DIA , MES , ANNO;
 int key;

 //Creamos el bucle infinito hasta que pulsemos la tecla escape

     /* code */


  while (key != ESCAPE_KEY)

 {
     std::cout << "Pulsa ESC para salir " << std::endl;
     std::cout << "_____________________" << std::endl;

     std::cout << "Dia :";
     std::cin >> DIA ;
     std::cout << "Mes:";
     std::cin >> MES ;
     std::cout << "Año:" ;
     std::cin >> ANNO ;
     try
     {

        fjv::control::cFecha fecha(DIA,MES,ANNO);
         std::cout << fecha.to_string() << std::endl ;
     }
     catch(fjv::ExFechaError &e )
     {
       std::cout <<   e.MostrarCausa() << std::endl;
     }


   key = getchar();
 }
 system("PAUSE");
 exit(EXIT_SUCCESS);
}
