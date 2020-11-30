#ifndef CABLE_H
#define CABLE_H

#include <string>
#include <iostream>

using namespace std;

enum class InstallMethod
{
    Method_1, Method_2, Method_3, Method_4, Method_5
};

class Cable
{
public:
    Cable(InstallMethod method, float cableSize, unsigned int noOfCables, string AC_DC);

private:
    InstallMethod method;
    float cableSize = 0;
    unsigned int noOfCables = 0;
    string AC_DC = "";
};

#endif // CABLE_H
