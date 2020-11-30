#ifndef CABLE_H
#define CABLE_H

#include <string>
#include <iostream>

#include "Method.h"

using namespace std;

class Cable
{
public:
    Cable(MethodInstallation method, float cableSize, unsigned int noOfCables, string AC_DC);

private:
    MethodInstallation method;
    float cableSize = 0;
    unsigned int noOfCables = 0;
    string AC_DC = "";
};

#endif // CABLE_H
