#ifndef CABLE_H
#define CABLE_H

#include <string>
#include <iostream>

using namespace std;

enum class InstallMethod
{
    Method_1, Method_2, Method_3, Method_4, Method_5
};

enum class noOfPhase
{
    singlePhase, threePhase
};

enum class inFreeAir
{
    Horizontal, Vertical, Trefoil
};

class Cable
{
public:
    Cable(InstallMethod method, float cableSize, unsigned int noOfCables, string AC_DC, noOfPhase phases);

private:
    InstallMethod method;
    noOfPhase phases;
    float cableSize = 0;
    unsigned int noOfCables = 0;
    string AC_DC = "";
};

#endif // CABLE_H
