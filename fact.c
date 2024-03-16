#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter a num : ");
    scanf("%d", &n);
    printf("the factorial is: %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n >= 2)
    {
        return n * factorial(n - 1);
    }
    else
    {
        printf("invalid number entered");
    }
}