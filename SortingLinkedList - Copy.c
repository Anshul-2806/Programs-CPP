#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void add(struct node **);
void display(struct node *);

int main()
{
    struct node *p;
    int n;
    char ch='Y'||'y';
    p= NULL;
    do
    {
        printf("\n Operation on sorted order Limited or Ascending Order Linked List ");
        printf("\n 1 Insertion");
        printf("\n 2 Display");
        printf("\n 3 Exit");
        printf("\n Enter your choice ");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            add(&p);
            break;
        case 2:
            display(p);
            break;
        case 3:
            exit(0);
            break;
        
        default:
        printf("\n Invalid Choices: ");
            break;
        }    //switch
        printf("\n Do you want to continue :-");
        fflush(stdin);
        scanf("%c",&ch);
    } while ((ch=='Y')||(ch=='y'));
// getch();    
return 0;
}     //main

void add(struct node **q)
{
    struct node *r,*temp;
    int item;
    printf("\n Enter the element ");
    scanf("%d",&item);
    temp =*q;
    r= (struct node *) malloc(sizeof(struct node));
    r->data=item;
    if ((*q==NULL)||((*q)->data>item))
    {
        *q=r;
        (*q)->next=temp;
    }
    else
    {
        while (temp!=NULL)  
        {
            if ((temp->data<=item)&&((temp->next->data>item)||(temp->next==NULL)))
            {
                r->next=temp->next;
                temp->next=r;
                return;
            }
            temp=temp->next;
        }//while
        
    }//else
    
}//void add

void display(struct node *q)
{
    printf("\n The elements are :- \n");
    while (q!=NULL)
    {
        printf("\n %d",q->data);
        q=q->next;
    }// while
    
}