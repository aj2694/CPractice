#include<stdio.h>
static int count=0;
void printline()
{
	count++;
	printf("--------------------------------------------------------------");
}
int main()
{
	int num,i;
	printf("Enter the number of times you cant to print the line");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printline();
	}
	printf("%d",count);
}
