/**
 * @file cLog.cpp
 * @author ferjava(you@domain.com)
 * @brief  Implementacion  de  una clase log basica .Creara un archivo para añadir 
 * los errores  u otra inforamcion para su depuracion  u optimizacion
 * 
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * --Historial de cambios-- 
 */
#include <fstream>
#include <ctime>
#include <iostream>

#include "control/cLog.hpp"
using namespace std;
namespace fjv
{
    namespace control

    {
        // Default values for static constants
        bool cLogger::logEnabled=false;
        std::string cLogger::dateFormat="%Y/%m/%d %H:%M:%S";
        std::string cLogger::logFile;
        
        cLogger::cLogger()
        {
  // Si queremos podemos hacer que este constructor escriba en el log y nos ahorramos
  // tener que llamar todo el rato al método log()
        }

        cLogger::~cLogger()
        {
        }   


         void cLogger::setLogFile(string logFile)
        {
        this->logFile=logFile;
        this->logEnabled=true;  
        }


void cLogger::disableLog()
{
  this->logEnabled=false;
}


bool cLogger::enableLog()
{
  if (this->logFile.empty())
    return false;

  this->logEnabled=true;
  return true;
}

string cLogger::getLogTime()
{
  time_t t;
  struct tm *tm;
  char datetime[50];
  string res;

  t=time(NULL);
  tm=localtime(&t);
  strftime(datetime, 50, dateFormat.c_str(), tm);
  res=datetime;

  return res;
}

void cLogger::log(string data)
{
  ofstream out;
  if ( (!logEnabled) || (logFile.empty()) )
    return;
 
  out.open(logFile.c_str(), ios::app);
  if (out.fail())
    return;
 
  out << getLogTime() <<": "<<data << endl;

  out.close();
}

void cLogger::setDateFormat(std::string dateFormat)    
{
  this->dateFormat=dateFormat;
}   


    } // namespace control

    
}// namespace fjv


