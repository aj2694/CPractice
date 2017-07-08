//Program to convert a character into the opposite case
#include<stdio.h>
int convert(int);
void main()
{
    char i,j=0,result;

    printf("enter a char");
    scanf("%c",&j);

    result=convert(j);
    if(result==-1)
        printf("invalid");
    else
    {


    printf("%c",result);
    }
    getch();
}
int convert(int j)
{

    if(j>=97&&j<=122)
    {
    j=j-32;
    return j;
    }
    else if(j>=65&&j<=90)
    {
        j=j+32;
        return j;
    }
    else
        return -1;

}
