//Program to build a stack
#include<stdio.h>
#define MAXSIZE 2
void push(int);
void pop();
int *tos, *ptr,stack[MAXSIZE];

void main()
{
    int res;
  ptr=tos=stack;
  push(1);
  push(2);
  pop();

pop();

pop();

}
void push(int i)
{
    if(ptr-tos==MAXSIZE)
    {
        printf("stackoverflow");
    }
    else
    {
        *ptr=i;
        printf("%d",*ptr);
    }
    ptr++;
}
void pop()
{
    if(ptr-tos==0)
    {
        printf("Stack underflow");

    }
    else
    {
        printf("%d", *(ptr-1));
    }
    ptr--;
}
