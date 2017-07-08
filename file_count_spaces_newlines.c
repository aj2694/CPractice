//File operations counting new lines and spaces in a file-
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char a[5][7],b[5][12],ch;
    int i,count=0,count1=0,count2=0;
    fp=fopen("trial.txt","w");
    printf("enter the text");
    for(i=0;i<5;i++)
    {
         gets(a[i]);
         fprintf(fp,"%.5s",&a[i]);
            fprintf(fp,"%c",' ');
    }


    fclose(fp);
    fp=fopen("trial.txt","r");
    i=0;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
            count++;
        if(ch==' ')
            count1++;
    }
    printf("words=%d newlines=%d",count1,count);
    while(1)
    {
    fscanf(fp,"%s",a[i]);


        if(strlen(a[i])==4)
        {
            count2++;

             i++;
        }
        else
        {
            i++;

        }
        if(i>=5)
        {
            break;
        }

    }
     printf("4words=%d",count2);

    fclose(fp);


}
