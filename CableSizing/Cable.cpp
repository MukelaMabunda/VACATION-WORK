#include "Cable.h"

Cable::Cable(InstallMethod method, double cableSize, unsigned int noOfCables, string AC_DC, noOfPhase phases)
{
    this -> method = method;
    this -> cableSize = cableSize;
    this -> noOfCables = noOfCables;
    this -> AC_DC = AC_DC;
    this -> phases = phases;

    if (
        method != InstallMethod::Method_1
        && method != InstallMethod::Method_2
        && method != InstallMethod::Method_3
        && method != InstallMethod::Method_4
        && method != InstallMethod::Method_5
    )
    {
        throw "Input Valid Method \nChoose from Method_1 to Method_5\n";
    }
    else if (cableSize < 1 || cableSize > 1000)
    {
        throw "Input Valid Cable Size \nChoose from 1mm to 1000mm do not include units\n";
    }
    else if (noOfCables < 2 || noOfCables > 3)
    {
        throw "Input Valid no of cables \nChoose from 2 and 3\n";
    }
    else if (phases != noOfPhase::singlePhase && phases != noOfPhase::threePhase)
    {
        throw "Input Valid number of phases \nChoose from single and threePhase\n";
    }
    else if ((method == InstallMethod::Method_4 || method == InstallMethod::Method_5) && cableSize < 25)
    {
        throw "Input valid size for method_4 or method_5";
    }
}
