#include "voltageDrop.h"
#include <cmath>
#include <cstdlib>

voltageDrop::voltageDrop(double I, double L, double Xc, double Rc)
{
    this -> I = I;
    this -> L = L;
    this -> Xc = Xc;
    this -> Rc = Rc;

    Zc = sqrt (pow(Xc,2) + pow(Rc,2));
}

double voltageDrop::voltageDropNum(std::string PhaseType)
{
    if (PhaseType == "1AC" || PhaseType == "DC")
    {

    }
    else if (PhaseType == "3AC")
    {

    }
    else
    {
        throw "WRONG PHASE TYPE USE EITHER: \n1AC - SINGLE PHASE\n3AC - THREE PHASE\nDC - DIRECT CURRENT";
    }
}
