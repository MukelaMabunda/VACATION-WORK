#ifndef VOLTAGEDROP_H
#define VOLTAGEDROP_H

#include <string>

class voltageDrop
{
public:
    voltageDrop(double I, double L, double Xc, double Rc);
    double voltageDropNum(std::string PhaseType);

private:
    double I = 0;
    double L = 0;
    double Xc= 0;
    double Rc= 0;
    double Zc= 0;
};

#endif // VOLTAGEDROP_H
