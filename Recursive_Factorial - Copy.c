#include <stdio.h>
int fact(int);
void main()
{
    int n, fac;
    printf("Enter the number ");
    scanf("%d", &n);
    fac = fact(n);
    printf("\n Factorial of %d is %d", n, fac);
}
int fact(int n)
{
    if ((n == 1) || (n == 0))
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}
// int fact(int n)
// {
//     int i, f = 1;
//     for (i = 0; i < n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }