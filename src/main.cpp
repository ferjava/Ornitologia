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
#include <yui/YUI.h>
#include <yui/YWidgetFactory.h>
#include <yui/YDialog.h>
#include <yui/YLayoutBox.h>
#include <yui/YEvent.h>

int main ()
{ 

  
    auto logger =new fjv::control::cLogger();
  logger->setLogFile("log.txt");
  logger->log("Probando libYUI");

   /* YDialog    * dialog = YUI::widgetFactory()->createPopupDialog();
    YLayoutBox * vbox   = YUI::widgetFactory()->createVBox( dialog );
    YUI::widgetFactory()->createLabel     ( vbox, "Hello, World!" );
    YUI::widgetFactory()->createPushButton( vbox, "&OK" );

    dialog->waitForEvent();
    dialog->destroy();*/
    
      
    fjv::control::LOG = logger ;///variable Global para acceder al log desde cuaquier sitio

    
    auto  *app = new CAppTest();
    app->set_Name(PROYECT_STRING);
    app->set_Version_string(VERSION);
    app->Init();
/*
 delete logger;  
 fjv::control::LOG = nullptr;
 delete app;*/
 //system("clear");
 std::cin.get();
 exit(EXIT_SUCCESS);
 }


