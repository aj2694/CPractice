//Program to print a number pyramid
#include<stdio.h>

int main()
{
	int i,j,k;
	
	for (i=1;i<4;i++)
	{
			
		for(j=3;(j-i)>=0;j--)
			{
				printf("\t");
			}
		
		for(k=i;k>0;k--)
			{
				printf("%d\t",k);
			}
		for(k=1;k<=i;k++)
			{
				printf("%d\t",k);
			}
	
		printf("\n");
	}
return 0;
}
