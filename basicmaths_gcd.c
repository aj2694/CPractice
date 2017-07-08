//Program to print gcd of two numbers
#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
   if(b==0)
    {
        return a;
    }

        return gcd(b,b%a);
}
void main()
{
int res;
res=gcd(5,20);
printf("%d",res);
}
