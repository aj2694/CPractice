//File operations- renaming a file
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp,*f;
    char a[5][7],b[5][7],ch;
    int i,count=0,count1=0,count2=0;
    fp=fopen("trial.txt","w");
    printf("enter the text");
    for(i=0;i<5;i++)
    {
         gets(a[i]);
         fprintf(fp,"%.5s",&a[i]);
         fprintf(fp,"%c",'\n');
    }
    fclose(fp);
    fp=fopen("trial.txt","r+");
    f=fopen("trial1.txt","a");
    i=0;
    while(1)
    {
    fgets(a,512,fp);
    if(strcmp(a[i],"hello")==0)
        {
            printf("%s","HELLO");
            fprintf(f,"%s","HELLO");
            i++;
            continue;
        }
     else
        {
           fprintf(f,"%s",&a[i]);
           puts(a[i]);
           i++;
            if(i>=5)
                {
                    break;
                }
            continue;
        }
    }

 fclose(f);
 fclose(fp);
 f=fopen("trial1.txt","r");
    while((ch=fgetc(f))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(f);
    remove("trial.txt");
    rename("trial1.txt","trial.txt");
}
