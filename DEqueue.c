#include <stdio.h>

void InsertFront();
void InsertRear();
void DeleteFront();
void DeleteRear();
void Display();
int maxsize = 5, item, dequeue[10], front = -1, rear = -1, count = 0, c, k, i;
int main()
{
    char ch;
    int n;
    do
    {
        printf("\n Operation of Double Ended Queue");
        printf("\n 1. Insertion from front end in Double Ended Queue ");
        printf("\n 2. Insertion from Rear end in Double Ended Queue ");
        printf("\n 3. Deletion from front end in Double Ended Queue ");
        printf("\n 4. Insertion from rear end in Double Ended Queue ");
        printf("\n 5. Display");
        printf("\n Enter your choice");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            InsertFront();
            break;
        case 2:
            InsertRear();
            break;
        case 3:
            DeleteFront();
            break;
        case 4:
            DeleteRear();
            break;
        case 5:
            Display();
            break;
        default:
            printf("\n User has given wrong number ");
        }
        printf("\n Do you want to continue ? :- ");
        fflush(stdin);
        scanf("%c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));
    return 0;
}
void InsertFront()
{
    if (((front == 0) && (rear == (maxsize - 1))) || (front == rear + 1))
    {
        printf("\nQueue is full");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = maxsize - 1;
    }
    else
    {
        front = front - 1;
    }
    printf("\n Enter the element");
    scanf("%d", &item);
    dequeue[front] = item;
}
void InsertRear()
{
    if ((front == 0) && (rear == maxsize - 1))
    {
        printf("\nQueue is full");
        return;
    }
    printf("\n Enter the element");
    scanf("%d", &item);
    if (front == -1)
    {
        front = 0;
        rear = 0;
        dequeue[front] = item;
        return;
    }
    if (rear == maxsize - 1)
    {
        k = front - 1;
        for (i = front - 1; i <= rear; i++)
        {
            k = i;
            if (k == maxsize - 1)
            {
                dequeue[k] = 0;
            }
            else
            {
                dequeue[k] = dequeue[i + 1];
            }
        } 
        rear = rear - 1;
        front = front - 1;
    } 
    rear = rear + 1;
    dequeue[rear] = item;

} 

void DeleteFront()
{
    if (front == -1)
    {
        printf("\n Queue is empty or Queue is underflow");
        return;
    }
    item = dequeue[front];
    printf("\n The Deleted item is %d", item);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
} 

void DeleteRear()
{
    if (front == -1)
    {
        printf("\n Queue is empty or Queue is underflow");
        return;
    }
    item = dequeue[rear];
    printf("\n The Deleted item is %d", item);
    rear = rear - 1;
    if (front == 0)
    {
        front = -1;
    }

} 
void Display()
{
    if (front == -1)
    {
        printf("\n Queue is empty");
        return;
    }
    printf("\n Elements are: \n");
    int i = front;
    
    while (i <= rear)
    {
        printf("\t %d", dequeue[i]);
        i++;
    }
}