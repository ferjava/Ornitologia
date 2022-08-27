/**
 * @file cAppDialog.cpp
 * @author your name (you@domain.com)
 * @brief  Creamos un Dialog para la aplicacion de fjv
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "cAppDialog.hpp"
#include <yui/YUI.h>
#include <yui/YWidgetFactory.h>
#include <yui/YDialog.h>
#include <yui/YLayoutBox.h>
#include <yui/YEvent.h>
namespace fjv
{

    void  fjv::AppDialog::Create()
    {
    dialog = YUI::widgetFactory()->createPopupDialog();
    YLayoutBox * vbox   = YUI::widgetFactory()->createVBox( dialog );
    YUI::widgetFactory()->createLabel     ( vbox, "Hello, World!" );
    YUI::widgetFactory()->createPushButton( vbox, "&OK" );


        dialog->waitForEvent();
        
    }
    fjv::AppDialog::~AppDialog(){
        dialog->destroy();

    }
}