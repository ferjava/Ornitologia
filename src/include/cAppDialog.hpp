#ifndef __C_APP_DIALOG_HPP_
#define __C_APP_DIALOG_HPP_
/**
 * @brief : Declaracion de una clase para crear un dialogo que muestre
 * el nombre del programa 
 *        
 *            
 * 
 */
#include "yui/YDialog.h"

namespace fjv 
{
    class  AppDialog 
    {
        public:
        AppDialog(){};
        void  Create();
        ~AppDialog();
        private :
        YDialog* dialog;
    };
}

#endif //__C_APP_DIALOG_HPP_
