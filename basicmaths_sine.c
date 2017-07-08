//Program to find sine of an angel
#include<stdio.h>
float sin(float);
float power(float,int);
int factorial(int);
void main()
{
    float x,y, res;
    printf("enter an angle");
    scanf("%f",&x);
    y=x*(3.14)/180;

    res=sin(y);
    printf("%f",res);
}
float sin(float x)
{
    int i;
    float r1=0,r2=0,r3;
    for(i=1;i<=9;i+=4)
    {
        r1=r1+power(x,i)/factorial(i);

    }
     for(i=3;i<=7;i+=4)
    {
        r2=r2+power(x,i)/factorial(i);

    }
    r3=r1-r2;
    return r3;
}
float power(float x,int i)
{
    float mul=1;
    int k;

    for(k=1;k<=i;k++)
    {
        mul=mul*x;
    }

    return mul;
}
int factorial(int i)
{int k;
int fact=1;
for(k=i;k>0;k--)
{
    fact=fact*k;
}
return fact;

}
