//Program to echo user entered character in lower case
#include<stdio.h>

void main()
{
    char ch;
    while((ch=getche())!=0)
    {
        if(isupper(ch))ch=tolower(ch);
        putchar(ch);
    }
}
