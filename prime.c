#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, count = 0, num = 1;
    printf("how many prime num you want to print: \n");
    scanf("%d", &n);
    while (count < n)
    {
        if (prime(num))
        {
            printf("%d\t", num);
            count++;
        }
        num++;
    }
    return 0;
}
