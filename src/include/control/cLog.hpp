#ifndef _C_LOGGER_HPP_
#define _C_LOGGER_HPP_

/**
 * @brief Contiene la declaracion de un clase para crear un archivo log de basico 
 * de la aplicacion 
 * 
 */
#include <string>

namespace fjv
{
     namespace control
     {
        class cLogger 
       {
        public:
         cLogger();
          virtual ~cLogger();
          /**
           * @brief Nombre del archivo para el log 
           * 
           * @param logfile 
           */
            void  setLogFile  (std::string logfile);
            void disableLog();
            bool enableLog();
            void log(std::string data);
            void setDateFormat(std::string dateFormat);
        private:
            std::string getLogTime();

            static std::string logFile;
            static bool logEnabled;
            static std::string dateFormat; 

       };   
         static cLogger* LOG = nullptr ;//puntero para asignar al log creado 
     }  //namespace control

} // namespace fjv



#endif //_C_LOG_HPP_
