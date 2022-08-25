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
#include "CAppTest.hpp"
#include "config.h"
#include <iostream>
#include "control/cLog.hpp"
int main ()
{   
    auto logger =new fjv::control::cLogger();
  logger->setLogFile("log.txt");
  logger->log("También puedo escribir cualquier cosa que quiera en el log");
    
    fjv::control::LOG = logger ;///variable Global para acceder al log desde cuaquier sitio


    auto  *app = new CAppTest();
    app->set_Name(PROYECT_STRING);
    app->set_Version_string(VERSION);
    app->Init();

 delete logger;  
 delete app;
 //system("clear");
 std::cin.get();
 exit(EXIT_SUCCESS);
 }


