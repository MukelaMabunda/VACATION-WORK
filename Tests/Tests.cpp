#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "voltageDrop.h"

TEST_CASE("Test accuracy of voltage drop calculator")
{
    voltageDrop dropObj( 10, 30, 0.102, 9.011);
    CHECK(dropObj.voltageDropNum("1AC")==5.41);
}
