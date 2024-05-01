#include <stdio.h>
#include <string.h>
#include<conio.h>

char stack[50];
int top = -1;
void intopost(char infix[]);
void push(char);
int preceed(char);
char pop();
void main()
{
    char infix[25];
    printf("\n Enter the infix Expression :- ");
    gets(infix);
    intopost(infix);
    getch();
}
void push(char symb)
{
    if (top >= 49)
    {
        printf("\n Stack overflow");
        getch();
        return;
    }
    else
    {
        top = top + 1;
        stack[top] = symb;
    }
}
char pop()
{
    char item;
    if (top == -1)
    {
        printf("\n Stack Empty");
        getch();
        return 0;
    }
    else
    {
        item = stack[top];
        top--;
    }
    return (item);
}
int preceed(char ch)
{
    if (ch == 94)
    {
        return 5;
    }
    else if ((ch == 47) || (ch == 42))
    {
        return 4;
    }
    else if ((ch == 43) || (ch == 45))
    {
        return 3;
    }
    else
    {
        return 2;
    }
}
void intopost(char infix[])
{
    int len;
    static int index = 0, pos = 0;
    char symbol, temp;
    char postfix[50];
    len = strlen(infix);
    push('#');
    while (index < len)
    {
        symbol = infix[index];
        switch (symbol)
        {
        case '(':
        {
            push(symbol);
            break;
        }
        case ')':
        {
            temp = pop();
            while (temp != '(')
            {
                postfix[pos] = temp;
                pos++;
                temp = pop();
            }
            break;
        }
        case '^':
        case '/':
        case '*':
        case '+':
        case '-':
        {
            while (preceed(stack[top]) >= preceed(symbol))
            {
                temp = pop();
                postfix[pos] = temp;
                pos++;
            }
            push(symbol);
            break;
        }
        default:
            postfix[pos++] = symbol;
            break;
        }
        index++;
    }
    while (top > 0)
    {
        temp = pop();
        postfix[pos++] = temp;
    }
    postfix[pos++] = '\0';
    printf("\n The postfix expression is :- ");
    puts(postfix);
    return;
}