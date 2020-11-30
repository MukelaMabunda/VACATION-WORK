#include "Cable.h"

Cable::Cable(InstallMethod method, float cableSize, unsigned int noOfCables, string AC_DC)
{
    this -> method = method;
    this -> cableSize = cableSize;
    this -> noOfCables = noOfCables;
    this -> AC_DC = AC_DC;

    cout<<"Cable construct -> "<<cableSize<<" "<<noOfCables<<" "<<AC_DC;
}
