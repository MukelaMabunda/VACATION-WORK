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

voltageDrop::voltageDrop(double I, double L, int Voltage, double cableSize, std::string AL_CU, std::string AC_DC)
{
    this -> I = I;
    this -> L = L;
    this -> Voltage = Voltage;

    cableCurrent impedance;
    auto [Xc_Cu, Rc_Cu, Xc_AL, Rc_AL, Rc_Cu_DC, Rc_AL_DC] = impedance.getImpedance(cableSize);

    if (AL_CU == "AL" && AC_DC == "AC")
    {
        //Xc_Cu, Rc_Cu, Xc_AL, Rc_AL, Rc_Cu_DC, Rc_AL_DC
        Xc = Xc_AL;
        Rc = Rc_AL;
    }
    else if (AL_CU == "CU" && AC_DC == "AC")
    {
        Xc = Xc_Cu;
        Rc = Rc_Cu;
    }
    else if (AL_CU == "AL" && AC_DC == "DC")
    {
        Xc = 0;
        Rc = Rc_AL_DC;
    }
    else if (AL_CU == "CU" && AC_DC == "DC")
    {
        Xc = 0;
        Rc = Rc_Cu_DC;
    }
    Zc = sqrt (pow(Xc,2) + pow(Rc,2));
}

tuple<double,double,double> voltageDrop::getUsedImpedance()
{
    return {Xc,Rc,Zc};
}

double voltageDrop::voltageDropNum(const std::string &PhaseType)
{
    cout<<Vdrop;
    if (PhaseType == "1AC" || PhaseType == "DC")
    {
        Vdrop = (2*I*L*Zc)/(1000);
    }
    else if (PhaseType == "DC")
    {
        Zc = Rc;
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
