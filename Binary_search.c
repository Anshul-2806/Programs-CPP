#include <stdio.h>
void main()
{
    int n, a[5], i = 0, loc = 0, item;
    printf("Enter the size of the list in number ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be found ");
    scanf("%d", &item);
    int low = 0, high = (n - 1);
    while (low <= high)
    {
        int mid = ((low + high) / 2);
        if (a[mid] == item)
        {
            printf("The element is found in location %d ", mid + 1);
            loc = mid + 1;
            break;
        }
        else if (a[mid] < item)
        {
            low = mid + 1;
        }
        else if (a[mid] > item)
        {
            high = mid - 1;
        }
    }
    if (loc == 0)
    {
        printf("Element not found ");
    }
}