#include <stdio.h>

void Insert();
void Delete();
void Display();
int maxsize = 3, item, queue[10], front = -1, rear = -1;
int main()
{
    char ch;
    int n;
    do
    {
        printf("\n 1. Insertion in queue ");
        printf("\n 2. Deletion in queue");
        printf("\n 3. Display");
        printf("\n Enter your choice");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        default:
            printf("\n User has given wrong number ");
        }
        printf("\n Do you want to continue ? :- ");
        fflush(stdin);
        scanf("%c",&ch);
    } while ((ch == 'y') || (ch == 'Y'));
    return 0;
}
void Insert()
{
    if ((rear==maxsize-1))
    {
        printf("\nQueue is full");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    printf("\n Enter the item");
    scanf("%d", &item);
    queue[rear] = item;
}
void Delete()
{
    if (front == -1)
    {
        printf("\n Queue is empty or Queue is underflow");
        return;
    }
    item = queue[front];
    printf("\n The Deleted item is %d", item);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front += 1;
    }
}
void Display()
{
    int i;
    printf("\n Elements are: \n");
    for (i = front; i <= rear; i++)
    {
        printf("\t %d ", queue[i]);
    }
}