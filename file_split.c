//File operations -splitting a file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr,*ptr2,*ptr3;
    char **temp;
    char temp2[10][10];
    int num,num1,i,bytes;
    printf("enter the number of characters");
    scanf("%d",&num);
    temp=(char**)malloc(num+1*sizeof(char));
    printf("enter the sixe of each string");
    scanf("%d",&num1);
    for(i=0;i<num+1;i++)
    {
       temp[i]=(char*)malloc(num1*sizeof(char));
    }
    ptr=fopen("seed.txt","w");
    printf("enter the string");
    for(i=0;i<num+1;i++)
    {
    gets(temp[i]);
    fputs(temp[i],ptr);

    }
    fclose(ptr);

    printf("record inserted");
    printf("enter the number of bytes in file one");
    scanf("%d",&bytes);
    ptr=fopen("seed.txt","r");
    ptr2=fopen("seed1.txt","w");
    ptr3=fopen("seed2.txt","w");
    fgets(temp2,bytes+1,ptr);
    fputs(temp2,ptr2);
    fseek(ptr,bytes-1,0);
    fgets(temp2,512,ptr);
    fputs(temp2,ptr3);

    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);


}
