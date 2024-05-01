#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next, *prev;
};
void insertBeg(struct node **);
void insertMiddle(struct node *);
void insertEnd(struct node **);
void DeleteFront(struct node **);
void DeleteRear(struct node **);
void DeleteMiddle(struct node **);
void Display(struct node *);
int count(struct node *);
void main()
{
    struct node *p;
    int choice, n = 0;
    p = NULL;
    char ch = 'y' || 'Y';
    do
    {
        printf("\n Operation on Doubly Linked List");
        printf("\n 1. Insertion at beginning of Linked List");
        printf("\n 2. Insertion at Middle Of Linked List");
        printf("\n 3. Insertion at End Of Linked List");
        printf("\n 4. Deletion at beginning Of Linked List");
        printf("\n 5. Deletion at End Of Linked List");
        printf("\n 6. Deletion at Middle Of Linked List");
        printf("\n 7. Display");
        printf("\n 8. Count number of nodes");
        printf("\n Enter your choice");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertBeg(&p); // &p = **q
            break;
        case 2:
            insertMiddle(p);
            break;
        case 3:
            insertEnd(&p);
            break;
        case 4:
            DeleteFront(&p);
            break;
        case 5:
            DeleteRear(&p);
            break;
        case 6:
            DeleteMiddle(&p);
            break;
        case 7:
            Display(p);
            break;
        case 8:
            n = count(p);
            printf("\n the number of nodes on the Doubly linked list is %d", n);
            break;
        default:
            printf("\n Invalid choice ");
        }
        printf("\n Do you want to continue :-");
        fflush(stdin);
        scanf("%c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));
    getch();
}
void insertBeg(struct node **q)
{
    struct node *temp;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    if ((*q) == NULL)
    {
        temp->data = num;
        temp->prev = NULL;
        temp->next = NULL;
        (*q) = temp;
    }
    else
    {
        temp->data = num;
        temp->prev = NULL;
        temp->next = *q;
        (*q)->prev = temp;
        (*q) = temp;
    }
}
void insertEnd(struct node **q)
{
    struct node *temp, *r;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num);
    if ((*q) == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->prev = NULL;
        temp->next = NULL;
        (*q) = temp;
    }
    else
    {
        temp = *q;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        temp->next = r;
        r->prev = temp;
        r->next = NULL;
    }
}
void insertMiddle(struct node *q)
{
    struct node *temp, *r, *old;
    int i, loc, num;
    temp = q;
    printf("\n Enter the location you want to dd the node ");
    scanf("%d", &loc);
    for (i = 1; i < loc; i++)
    {
        old = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("There are less than %d elements in list ", loc);
        getch();
        return;
    }
    printf("\n Enter the element ");
    scanf("%d", &num);
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    r->next = temp;
    r->prev = old;
    old->next = r;
    temp->prev = r;
}

void DeleteFront(struct node **q)
{
    struct node *temp, *r;
    if (*q == NULL)
    {
        printf("List is Empty");
        return;
    }
    r = *q;
    temp = *q;
    temp = temp->next;
    temp->prev = NULL;
    *q = temp;
    r->next = NULL;
    printf("The deleted node is %d", r->data);
    free(r);
}
void DeleteRear(struct node **q)
{
    struct node *temp, *old;
    if (*q == NULL)
    {
        printf("List is Empty");
        return;
    }
    temp = *q;
    while (temp->next != NULL)
    {
        old = temp;
        temp = temp->next;
    }
    old->next = NULL;
    temp->prev = NULL;
    printf("The deleted node is %d", temp->data);
    free(temp);
}
void DeleteMiddle(struct node **q)
{
    struct node *temp, *old;
    int num;
    printf("Enter the value of node which you want to delete");
    scanf("%d", &num);
    if (*q == NULL)
    {
        printf("List is Empty");
        return;
    }
    temp = *q;
    while (temp->data != num)
    {
        temp = temp->next;
    }
    printf("The deleted node is %d", temp->data);
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void Display(struct node *q)
{
    struct node *temp;
    if (q == NULL)
    {
        printf("List is Empty");
        return;
    }
    // temp = *q;
    while (q != NULL)
    {
        printf(" %d", q->data);
        q = q->next;
    }
}
int count(struct node *q)
{
    int c = 0;
    while (q != NULL)
    {
        q = q->next;
        c++;
    }
    return c;
}