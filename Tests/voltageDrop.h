#ifndef VOLTAGEDROP_H
#define VOLTAGEDROP_H

#include <string>
#include "cableCurrent.h"

class voltageDrop
{
public:
    voltageDrop(double I, double L, double Xc, double Rc, int Voltage);
    voltageDrop(double I, double L, int Voltage, double cableSize, std::string AL_CU, std::string AC_DC);

    double voltageDropNum(const std::string &PhaseType);
    double voltPercent();

private:
    int Voltage = 0;
    double voltPer = 0;
    double I = 0;
    double L = 0;
    double Xc= 0;
    double Rc= 0;
    double Zc= 0;
    double Vdrop = 0;
    double current = 0;
};

#endif // VOLTAGEDROP_H
