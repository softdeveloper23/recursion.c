#include <stdio.h>

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1); // sum() function calls itself
    else
        return n;
}