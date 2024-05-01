#include <stdio.h>
#include <conio.h>
void Insertfront();
void Deletefront();
void Insertrear();
void Deleterear();
void Display();
int dqueue[5], front = -1, rear = -1, maxsize = 4, item, count = 0, c, k, i;
void main()
{
  int n;
  char ch = 'Y' || 'y';
  
  do
  {
    printf("\n opeartions of Dqueue");
    printf("\n 1. insertion from front end.");
    printf("\n 2. insertion from rear end.");
    printf("\n 3. deletion  from front end.");
    printf("\n 4. deletion  from rear end.");
    printf("\n 5. display ");
    printf("\n enter your choice");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      Insertfront();
      break;
    case 2:
      Insertrear();
      break;
    case 3:
      Deletefront();
      break;
    case 4:
      Deleterear();
      break;
    case 5:
      Display();
      break;
    default:
      printf("\n uer has given wrong input");
    }
    printf("\n do you want to continue(y/n):");
    fflush(stdin);
    scanf("%c", &ch);
  } while ((ch == 'y') || (ch == 'Y'));

  getch();
}
void Insertfront()
{
  if (((front == 0) && (rear == maxsize - 1)) || (front == rear + 1))
  {
    printf("\n the queue is full");
    getch();
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
  printf("\n enter the element :");
  scanf("%d", &item);
  dqueue[front] = item;
}
void Insertrear()
{
  if (((front == 0) && (rear == maxsize - 1)) || (front == rear + 1))
  {
    printf("\n the queue is full");
    getch();
    return;
  }
  else if ((front == -1) && (rear == -1))
  {
    front = 0;
    rear = 0;
  }
  else if (rear == (maxsize - 1))
  {
    rear = 0;
  }
  else
  {
    rear = rear + 1;
  }
  printf("\n enter the element :");
  scanf("%d", &item);
  dqueue[rear] = item;
}
void Deletefront()
{
  if ((front == -1) && (rear == -1))
  {
    printf("\n the queue is empty");
    getch();
    return;
  }
  else if (front == rear)
  {
    item = dqueue[front];
    printf("\n the deleted element is %d", item);
    front = -1;
    rear = -1;
  }
  else if (front == (maxsize - 1))
  {
    item = dqueue[front];
    printf("\n the deleted element is %d", item);
    front = 0;
  }
  else
  {
    item = dqueue[front];
    printf("\n the deleted element is %d", item);

    front = front + 1;
  }
}
void Deleterear()
{
  if ((front == -1) && (rear == -1))
  {
    printf("\n the queue is empty");
    getch();
    return;
  }
  if (front == rear)
  {
    item = dqueue[rear];
    printf("\n the deleted element is %d", item);
    front = -1;
    rear = -1;
  }
  else if (rear == 0)
  {
    item = dqueue[rear];
    printf("\n the deleted element is %d", item);
    rear = (maxsize - 1);
  }
  else
  {
    item = dqueue[rear];
    printf("\n the deleted element is %d", item);
    rear = rear - 1;
  }
}

void Display()
{
  int i = front;
  printf("\n the elements of queue are:-");
  while (i != rear)
  {
    printf("\t %d", dqueue[i]);
    i = (i + 1) % maxsize;
  }
  printf("\t %d", dqueue[i]);
}