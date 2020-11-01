#ifndef _TESTCFECHA_
#define _TESTCFECHA_
 /**
  * @brief   : Declaracion del test de unitcpp para cFecha
  * @autor   : ferjava
  * @version : 0.1
  **/

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "cFecha.hpp"


class cFecha_Test : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE(cFecha_Test);
  CPPUNIT_TEST (cFecha_get);
  CPPUNIT_TEST (cFecha_set);
  CPPUNIT_TEST (cFecha_Exception);
  CPPUNIT_TEST_SUITE_END();
  public:
  	void setUp (void);
  	void tearDown (void);
  protected:
  	void cFecha_get(void);
  	void cFecha_set(void);
  	void cFecha_Exception(void);
  private:
   fjv::control::cFecha *a ,*b,*c ,*d;

};


#endif //__TESTCFECHA__
