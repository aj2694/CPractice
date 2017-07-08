//Program to show enums
#include<stdio.h>
#include<string.h>
enum section{primary,secondary};
typedef union
{
    int rollno;
    char section1[10];
    enum section sec;
    int marks;
    float percentage;
}student;
void main()
{
    student s[10];
    int a,i;
    for(i=0;i<1;i++)
    {
        printf("enter the roll o of the student");
        scanf("%d",&s[i].rollno);
        printf("enter the section");
        scanf("%s",s[i].section1);
        printf("enter the total marks of the student");
        scanf("%d",&s[i].marks);
    }
     for(i=0;i<1;i++)
    {
        s[i].percentage=((float)s[i].marks)/500*100;
        a=strcmp(s[i].section1,"primary");
        if(a==0)
        {
                if(s[i].percentage>=75)
                printf("A");
                else if(s[i].percentage>=63)
                printf("B");
                else if(s[i].percentage>=50)
                printf("C");
                else
                printf("F");
        }
        else
        {
               printf("%f",s[i].percentage);
        }
    }
}

