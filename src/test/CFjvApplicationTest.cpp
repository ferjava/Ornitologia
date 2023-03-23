#include "CFjvApplication.hpp"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(CFjvApplication)
{
  fjv::CFjvApplication* cFjvApplication;

  void setup()
  {
    cFjvApplication = new fjv::CFjvApplication();
  }
  void teardown()
  {
    delete cFjvApplication;
  }
};

TEST(CFjvApplication, Create)
{
  FAIL("Start here");//>Error creado por mi
  
}

