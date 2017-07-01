#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<curses.h>
int main()
{
	char ch,kbchar=1;
	int i;
	int count=1;

	printf("Enter a character");
	ch=getchar();
	if(ch>=65&&ch<=90)
	{
		printf("%c",(ch+32));
		fflush(stdout);
	}
	else if(ch>=97&&ch<=122)
	{
		printf("%c",(ch-32));
		fflush(stdout);
	}
	else
	{
		printf("Error");
		fflush(stdout);
	}
	printf("------------------------------");
	for(i=0;i<256;i++)
	{
		printf("%c",i);
		fflush(stdout);
		if(i%10==0)
		{
			sleep(1);
		}
	}
	while(!kbhit())
	{
		printf("%c",kbchar);
	}
return 0;
}
