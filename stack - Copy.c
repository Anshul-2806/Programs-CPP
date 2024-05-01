#include <stdio.h>
#include <stdlib.h>
#define maxsize 5

int top = -1, a[5], item, i, ch;
void push();
void pop();
void show();
int main()
{
    for (int j = 2; j > 1; j++)
    {
            printf("\n 1 PUSH");
            printf("\n 2 POP");
            printf("\n 3 PEEP \n 4. EXIT ");
            printf("\n Enter your choice");
            scanf("%d", &ch);
            switch (ch)
            {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    show();
                    break;
                case 4:
                    return 0;

                default:
                    printf("\n Invalid Choice");
            }
    }
    return 0;
}
void push()
{
    if (top == maxsize - 1)
    {
        printf("\n Stack is full");
    }
    else
    {
        printf("Enter the element : ");
        scanf("%d", &item);
        top += 1;   // top++
        a[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Deleted element is %d ", a[top]);
        top -= 1;  // top--
    }
}
void show()
{
    if (top == -1)
    {
        printf("Stack is empty and there is no element to show");
    }
    else
    {
        printf("Iteams are :");
        for (i = 0; i <= top; i++)
        {
            printf("\n %d \n", a[i]);
        }
    }
}