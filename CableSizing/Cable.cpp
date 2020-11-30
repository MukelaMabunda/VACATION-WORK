#include "Cable.h"

Cable::Cable(InstallMethod method, float cableSize, unsigned int noOfCables, string AC_DC)
{
    this -> method = method;
    this -> cableSize = cableSize;
    this -> noOfCables = noOfCables;
    this -> AC_DC = AC_DC;

    if (method != InstallMethod::Method_1 ||
            method != InstallMethod::Method_2 ||
            method != InstallMethod::Method_3 ||
            method != InstallMethod::Method_4 ||
            method != InstallMethod::Method_5 )
    {
        cerr<<"Input Valid Method \n Choose from Method 1 to Method 5";
    }
    else if (cableSize < 1 || cableSize > 1000)
    {
        cerr<<"Input Valid Cable Size \n Choose from 1mm to 1000mm do not include units";
    }
    else if (noOfCables<2 || noOfCables>3)
    {
        cerr<<"Input Valid no of cables \n Choose from 2 and 3";
    }

    cout<<"Cable construct -> "<<cableSize<<" "<<noOfCables<<" "<<AC_DC;
}
