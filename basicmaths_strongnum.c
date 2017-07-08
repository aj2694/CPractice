//Program to check whether a given number is a strong number
#include<stdio.h>
int fact (int);
void main()
{
    int num=1;
    while(num<1000)
    {

        strong(num);
        num++;
    }
}


void strong(int num)
{
    int num1,i,r[100],j=0,sum=0;
    printf("enter the num you want to check\n");
    scanf("%d",&num);
    num1=num;
       while(num>0)
    {
        i=num/10;
        r[j]=num%10;
        num=i;
        j++;
    }
    for(i=0;i<j;i++)
    {
        sum=sum+fact(r[i]);
    }
    //printf("%d",sum);
    if(sum==num1)
    {
        printf("%dstrong\n",num1);
    }

 }

int fact(int num)
{
    int fact=1;
    while(num>0)
    {
        fact=fact*(num);
        num=num-1;
    }
    return fact;

}
