#include <stdio.h>
void quicksort(int[], int, int);
int conquor(int[], int, int);
void main()
{
    int a[10], n, i;
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
    quicksort(a, 0, n - 1);
    printf("Your sorted data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}

void quicksort(int a[], int low, int high)
{
    int p;
    if (low < high)
    {
        p = conquor(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}
int conquor(int a[], int low, int high)
{
    int pivot, i, j, temp;
    pivot = a[high];
    i = low - 1;
    for (j = low; j <= high - 1; j++)
    {
        if (a[j] < pivot)
        {
            i = i + 1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return (i + 1);
}