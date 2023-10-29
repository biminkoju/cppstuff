#include "time.h"
#include <iostream>
#include "../randomnumber.hpp"
int RandomInt(int lb, int ub)
{
    srand(time(0));
    return (rand() % (ub - lb + 1) + lb);
};