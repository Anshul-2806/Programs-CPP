#include <stdio.h>

void main()
{
    int a[10], n, i, j, temp, loc, min;
    printf("Enter the size of the file ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the data %d ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Your data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        min = a[i];
        loc=i;
        for (j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }
    printf("Your sorted data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}