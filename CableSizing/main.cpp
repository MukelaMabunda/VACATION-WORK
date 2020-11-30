#include <iostream>
#include "Cable.h"
#include "Method.h"

using namespace std;

int main()
{
    float cableSize = 1.5;
    unsigned int noOfCables = 2;
    string AC_DC = "AC";

    Cable cableObj( MethodInstallation::Method_1, cableSize, noOfCables, AC_DC);

    return 0;
}
