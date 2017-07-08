//File operations - modify, read, delete a record from a file
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char name[10];
    char address[100];
    long int number;
}telephone;
void main()
{
    FILE *ptr,*ptr1,*ptr2;
    int num,i,del,choice,record,counter=0,modify;
    telephone t[100],t1[100],t2[100];
    char name1[100];
    printf("enter what you want to do:\n1)new entries 2)delete3)search");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            {
            printf("Enter the number of records:");
            scanf("%d",&num);
            for(i=0;i<num;i++)
            {
                printf("enter name:\n");
                scanf("%s",t[i].name);
                printf("enter address:\n");
                scanf("%s",t[i].address);
                printf("enter number:\n");
                scanf("%ld",&t[i].number);
            }
            ptr=fopen("text1.dat","wb");
            fwrite(&t,num*sizeof(telephone),1,ptr);
            fclose(ptr);
             ptr=fopen("text1.dat","rb");
            fread(&t1,num*sizeof(telephone),1,ptr);
             for(i=0;i<num;i++)
            {
                 printf("%s %s %d",t1[i].address,t1[i].name,t1[i].number);
            }
              fclose(ptr);

            }
    case 2:
            {
                printf("enter recoed u want to delete");
                scanf("%d",&record);
                ptr1=fopen("text1.dat","rb");
                ptr2=fopen("text12.dat","wb");
                while(counter<num)
                {   i=0;
                    fread(&t2,sizeof(telephone),1,ptr1);
                    if(t2[i].number==(long int)record)
                    {
                    }
                    else
                    {
                        fwrite(&t2,sizeof(telephone),1,ptr2);
                    }
                    counter++;
                    i++;
                }
                fclose(ptr1);
                fclose(ptr2);
                remove("text1.dat");
                rename("text12.dat","text1.dat");
                printf("Press any key..");
                ptr=fopen("text1.dat","rb");
                fread(&t1,num*sizeof(telephone),1,ptr);
             for(i=0;i<num-1;i++)
            {
                 printf("%s %s %d",t1[i].address,t1[i].name,t1[i].number);
            }
              fclose(ptr);

            }
            case 3:
            {
                counter=0;
             printf("enter recoed u want to modify");
                scanf("%d",&modify);
                ptr1=fopen("text1.dat","rb");
                ptr2=fopen("text12.dat","wb");
                while(counter<num)
                {   i=0;
                    fread(&t2,sizeof(telephone),1,ptr1);
                    if(t2[i].number==(long int)modify)
                    {

                        printf("enter name:\n");
                        scanf("%s",t2[i].name);
                        printf("enter address:\n");
                        scanf("%s",t2[i].address);
                        printf("enter number:\n");
                        scanf("%ld",&t2[i].number);
                        fwrite(&t2,sizeof(telephone),1,ptr2);
                    }
                    else
                    {
                        fwrite(&t2,sizeof(telephone),1,ptr2);
                    }
                    counter++;
                    i++;
                }
                fclose(ptr1);
                fclose(ptr2);
                remove("text1.dat");
                rename("text12.dat","text1.dat");
                printf("Press any key..");
                ptr=fopen("text1.dat","rb");
                fread(&t1,num*sizeof(telephone),1,ptr);
             for(i=0;i<num;i++)
            {
                 printf("%s %s %d",t1[i].address,t1[i].name,t1[i].number);
            }
              fclose(ptr);

            }
    }
}
