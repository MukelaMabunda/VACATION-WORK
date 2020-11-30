#include <iostream>
#include "Cable.h"

using namespace std;

int main()
{
    float cableSize = 1.5;
    unsigned int noOfCables = 2;
    string AC_DC = "AC";

    Cable cableObj( InstallMethod::Method_2, cableSize, noOfCables, AC_DC);

    return 0;
}
