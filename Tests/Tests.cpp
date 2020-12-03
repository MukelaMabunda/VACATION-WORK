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

TEST_CASE("Determine the corresponding current values")
{
    //cableCurrent(InstallMethod method, float cableSize, unsigned int noOfCables, inFreeAir freeAir)
    SUBCASE("Method 1")
    {
        cableCurrent current(InstallMethod::Method_1, 1.5, 2, inFreeAir::None);
        CHECK(current.getCableCurrent()==14.5);
    }

    SUBCASE("Method 1")
    {
        cableCurrent current0(InstallMethod::Method_1, 1.5, 3, inFreeAir::None);
        CHECK(current0.getCableCurrent()==13.5);
    }

    SUBCASE("Method 2")
    {
        cableCurrent current1(InstallMethod::Method_2, 1.5, 3, inFreeAir::None);
        CHECK(current1.getCableCurrent()==15.5);
    }

    SUBCASE("Method 3")
    {
        cableCurrent current2(InstallMethod::Method_3, 1, 2, inFreeAir::None);
        CHECK(current2.getCableCurrent()==15.5);
    }

    SUBCASE("Method 3")
    {
        cableCurrent current3(InstallMethod::Method_3, 120, 2, inFreeAir::None);
        CHECK(current3.getCableCurrent()==330);
    }

    SUBCASE("Method 4")
    {
        cableCurrent current4(InstallMethod::Method_4, 300, 2, inFreeAir::None);
        CHECK(current4.getCableCurrent()==635);
    }

    SUBCASE("Method 5, horizontal")
    {
        cableCurrent current5(InstallMethod::Method_5, 95, 3, inFreeAir::Horizontal);
        CHECK(current5.getCableCurrent()==341);
    }

    SUBCASE("Mathod 5, Vertical")
    {
        cableCurrent current6(InstallMethod::Method_5, 95, 3, inFreeAir::Vertical);
        CHECK(current6.getCableCurrent()==311);
    }

    SUBCASE("Method 5, Trefoil")
    {
        cableCurrent current7(InstallMethod::Method_5, 95, 3, inFreeAir::Trefoil);
        CHECK(current7.getCableCurrent()==264);
    }
}
