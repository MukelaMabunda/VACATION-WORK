#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "voltageDrop.h"

TEST_CASE("Test accuracy of voltage drop calculator")
{
    SUBCASE("SINGLE PHASE VOLTAGE DROP")
    {
        voltageDrop dropObj( 10, 30, 0.102, 9.011);
        CHECK(dropObj.voltageDropNum("1AC")==5.41);
    }

    SUBCASE("THREE PHASE VOLTAGE DROP")
    {
        voltageDrop dropObj( 10, 30, 0.102, 9.011);
        CHECK(dropObj.voltageDropNum("3AC")==4.69);
    }

    SUBCASE("DC VOLTAGE DROP")
    {
        voltageDrop dropObj( 10, 30, 0.102, 9.011);
        CHECK(dropObj.voltageDropNum("DC")==5.41);
    }

    SUBCASE("Throw exception for wrong phase type")
    {
        voltageDrop dropObj( 10, 30, 0.102, 9.011);
        CHECK_THROWS(dropObj.voltageDropNum("WRONG"));
    }
}

