#include <stdio.h>
int factorial(int n);
int main(void)
{
    int num = 5;
    int a;
    a = factorial(num);
    printf("%d ", a);
    return 0;
}
int factorial(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * (i + 1);
    }

    return result;
}
