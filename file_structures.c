//Program to show reading and writing structure to a file
#include<stdio.h>
typedef struct
{
    char str[10];
}book;
int main()
{
    FILE *fp;
    int num,i;
    book *ptr;
    printf("please enter no of books");
    scanf("%d",&num);
    ptr=(book*)malloc(num*sizeof(book));
    for(i=0;i<num;i++)
    {
        printf("enter the name of book");
        fflush(stdin);
        gets(ptr[i].str);
    }
     for(i=0;i<num;i++)
    {
            puts(ptr[i].str);
    }
    fp=fopen("structurereadwrite.txt","wb");
    for(i=0;i<num;i++)
    {
        fwrite(ptr,sizeof(book),1,fp);
    }
     fp=fopen("structurereadwrite.txt","rb");

        fread(ptr,sizeof(book),1,fp);

            puts(ptr[0].str);

fseek()
    fclose(fp);
}
