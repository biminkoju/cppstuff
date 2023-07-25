#include <cstdlib>
#include <time.h>
#include <iostream>
int randomint(int lb, int ub)
{
    srand(time(0));
    return rand() % (ub - lb + 1) + lb;
}
