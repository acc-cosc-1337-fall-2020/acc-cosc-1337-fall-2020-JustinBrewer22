//cpp
#include "loops.h"

int factorial(int num)
{
    int product = 1;
    for (int a=1; a<=num; a++)
    {
        product = product * a;
    }
    
    return product;
}