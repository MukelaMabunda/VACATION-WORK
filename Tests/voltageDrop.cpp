#include "voltageDrop.h"
#include <cmath>
#include <cstdlib>

voltageDrop::voltageDrop(double I, double L, double Xc, double Rc, int Voltage)
{
    this -> I = I;
    this -> L = L;
    this -> Xc = Xc;
    this -> Rc = Rc;
    this -> Voltage = Voltage;

    Zc = sqrt (pow(Xc,2) + pow(Rc,2));
}

double voltageDrop::voltageDropNum(std::string PhaseType)
{
    if (PhaseType == "1AC" || PhaseType == "DC")
    {
        Vdrop = (2*I*L*Zc)/(1000);
    }
    else if (PhaseType == "3AC")
    {
        Vdrop = (sqrt(3)*I*L*Zc)/(1000);
    }
    else
    {
        throw "WRONG PHASE TYPE USE EITHER: \n1AC - SINGLE PHASE\n3AC - THREE PHASE\nDC - DIRECT CURRENT";
    }

    Vdrop = std::ceil(Vdrop * 100.0) / 100.0;
    return Vdrop;
}

double voltageDrop::voltPercent()
{
    return voltPer = (Vdrop/Voltage)*100;
}
