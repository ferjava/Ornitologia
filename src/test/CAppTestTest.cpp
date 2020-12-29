#include "CAppTest.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(CAppTest)
{
  CAppTest* cAppTest;

  void setup()
  {
    cAppTest = new CAppTest();
  }
  void teardown()
  {
    delete cAppTest;
  }
};

TEST(CAppTest, Create)
{
  FAIL("Start here");
}

