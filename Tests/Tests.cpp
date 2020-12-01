#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "../CableSizing/Cable.h"
#include "../CableSizing/cableCurrent.h"

TEST_CASE("Test if cable can be created with no exceptions being thrown")
{
    float cableSize = 1.5;
    unsigned int noOfCables = 2;
    string AC_DC = "AC";

    SUBCASE ("Single phase method 1")
    {
        CHECK_NOTHROW(Cable{InstallMethod::Method_1, cableSize, noOfCables, AC_DC, noOfPhase::singlePhase});
    }

    SUBCASE ("Single phase method 2")
    {
        cableSize = 10.5;
        noOfCables = 3;
        AC_DC = "DC";
        CHECK_NOTHROW(Cable{InstallMethod::Method_2, cableSize, noOfCables, AC_DC, noOfPhase::singlePhase});
    }

    SUBCASE ("Single phase method 3")
    {
        cableSize = 100.5;
        noOfCables = 3;
        AC_DC = "DC";
        CHECK_NOTHROW(Cable{InstallMethod::Method_3, cableSize, noOfCables, AC_DC, noOfPhase::singlePhase});
    }

    SUBCASE ("Single phase method 4")
    {
        cableSize = 1000;
        noOfCables = 2;
        AC_DC = "DC";
        CHECK_NOTHROW(Cable{InstallMethod::Method_4, cableSize, noOfCables, AC_DC, noOfPhase::singlePhase});
    }

    SUBCASE ("Three phase method 5")
    {
        cableSize = 1000;
        noOfCables = 3;
        AC_DC = "AC";
        CHECK_NOTHROW(Cable{InstallMethod::Method_5, cableSize, noOfCables, AC_DC, noOfPhase::threePhase});
    }

    SUBCASE("Throw exception for wrong cable size")
    {
        cableSize = 16;
        noOfCables = 3;
        AC_DC = "AC";
        CHECK_THROWS(Cable{InstallMethod::Method_5, cableSize, noOfCables, AC_DC, noOfPhase::threePhase});
    }
}
