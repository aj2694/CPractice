//Program to convert given number into binary
#include<stdio.h>
#include<math.h>
void bin(int);
void main()
{
    int num;
    printf("enter num");
    scanf("%d",&num);
    bin(num);

}
void bin(int num)
{
    int i,x=1,j;
    int a[10]={0,0,0,0,0,0,0,0,0,0};


    for(j=8;j>=1;j--)
    {
         x=pow(2,j);
        while((num!=0)&&(num-x<x)&&(num-x>=0))
        {
           num=num-x;
            a[j]=1;

        }
        if(num==1)
        {
            a[0]=1;
        }
    }

    for(i=1;i<=10;i++)
        printf("%d",a[10-i]);
}
