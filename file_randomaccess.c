//Random file access
#include<stdio.h>
typedef struct
{
    char name[100];
    char address[100];
}emp;
void main()
{
    emp e[100],e2[100];
    FILE *fp;
  //  char name[100],address[100],ch,ch1[100];
    int num,i,j;
    fp=fopen("text.dat","wb");

    printf("number of records");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    printf("enter your name\n");
    scanf("%s",e[i].name);
    printf("address\n");
    scanf("%s",e[i].address);
    }
     for(i=0;i<num;i++)
    {
     fwrite(&e[i],sizeof(emp),1,fp);
    }

    fclose(fp);
    fp=fopen("text.dat","rb");
    if(fp==NULL)
    {
        perror("error:");
        return(-1);
    }
    else
   {
    printf("enter the record u wanna read");
    scanf("%d",&j);
    fseek(fp,(j-1)*sizeof(emp),0);
    fread(&e2[1],sizeof(emp),i,fp);
    printf("%s\n%s",e2[1].name,e2[1].address);
    }


    fclose(fp);


}
