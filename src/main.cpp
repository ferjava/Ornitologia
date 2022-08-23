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
int main ()
{
    auto  *app = new CAppTest();
    app->set_Name(PROYECT_STRING);
    app->set_Version_string(VERSION);
    app->Init();


 delete app;
 //system("clear");
 std::cin.get();
 exit(EXIT_SUCCESS);
 }


