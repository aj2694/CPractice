//Program showing use of malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char **ptr;
    int num,num1,i;
    printf("enter the number of each string:\n");
    scanf("%d",&num);
    ptr=(char**)malloc(num*sizeof(char));
     printf("enter the length of each string:\n");
     scanf("%d",&num1);
     for(i=0;i<num;i++)
     {
    ptr[i]=(char*)malloc(num1*sizeof(char));
     }
     printf("enter string");
    for(i=0;i<num;i++)
    {
       gets(ptr[i]);
    }
    for(i=0;i<num;i++)
    {
        puts(ptr[i]);
    }
    free(ptr);
}
