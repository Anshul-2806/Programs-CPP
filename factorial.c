#include<stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter a number to find factorial : ");
    scanf("%d", &n);

    if(n == 0)
    {
        return 0;
    }
    else{
        int i = 1;
        while (n>0)
        {
            fact = fact * i;
            i++;
        }
    }

    printf("Factorial is %d", fact);
    return 0;
}