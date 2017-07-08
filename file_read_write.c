//File operations reading and writing to a file
#include<stdio.h>
void main()
{
    FILE *fp;
    char name,address,ch,ch1[100];
    fp=fopen("text.txt","a");
    printf("enter your name\n");
    while((name=getchar())!='.')
    fputc(name,fp);
    printf("address\n");
    while((address=getchar())!='.')
    fputc(address,fp);
    fclose(fp);
    fp=fopen("text1.txt","r");
    if(fp==NULL)
    {
        perror("error:");
        return(-1);
    }
    else
    {
    while((fgets(ch1,200,fp))!=NULL)
    {
        puts(ch1);

    }
    }
    fclose(fp);


}
