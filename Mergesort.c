#include <stdio.h>
void mergesort(int[], int, int);
void merge(int[], int, int, int);
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
    mergesort(a, 0, n - 1);
    printf("Your sorted data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}

void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = ((low + high) / 2);
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
void merge(int a[], int low, int mid, int high)
{
    int i, j, k, temp[10];
    k = low;
    i = low;
    j = mid + 1;
    while ((i <= mid) && (j <= high))
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i = i + 1;
            k = k + 1;
        }
        else
        {
            temp[k] = a[j];
            j = j + 1;
            k = k + 1;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i = i + 1;
        k = k + 1;
    }
    while (j <= high)
    {
        temp[k] = a[j];
        j = j + 1;
        k = k + 1;
    }
    for (k = low; k <= high; k++)
    {
        a[k] = temp[k];
    }
}