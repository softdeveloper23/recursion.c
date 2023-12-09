#include <stdio.h>

int sum(int n)
{
    if (n != 0)
    {
        printf("n = %d\n", n);
        return n + sum(n - 1); // sum() function calls itself
    }
    else
        return n;
}

int main()
{
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}