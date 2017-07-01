//Program showing common math problems
#include<stdio.h>
#include<math.h>
//Program to check for Amstrong numbers
void checkAmstrong()
{
	
	int num,num1,digit,sum=0;
	printf("Enter a number");
	scanf("%d",&num);
	num1=num;
	while(num1)
	{
		digit=num1%10;
	
		sum=sum+pow(digit,3);
	
		num1=num1/10;
	}
	if(sum==num)
	{
		printf("Amstrong Number%d",num);
	}
	else
	{
		printf("Not Amstrong");
	}
}
void printAllAmstrong()
{
	int num,num1,digit,sum=0;
	for(num=1;num<1000;num++)
	{
		sum=0;
		num1=num;
		while(num1)
		{
			digit=num1%10;
	
			sum=sum+pow(digit,3);
	
			num1=num1/10;
		}
		if(sum==num)
		{
			printf("Amstrong Number: %d",num);
		}
		

	}
} 
void printPythagorianTriplets()
{
	int i,j,k,count=0;
	for(i=0;i<101;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=0;k<j;k++)
			{
				if((i!=j!=k)&&(i!=0)&&(j!=0)&&(k!=0))
				{
					if(pow(i,2)==(pow(j,2)+pow(k,2)))
					{	
						count++;
						printf("%d:%d %d %d\n",count,i,j,k);
						
					}
				}
			}
		}
	}
}
void allPossibleCombinations()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	
int main()
{
//	printAllAmstrong();
	printPythagorianTriplets();
return 0;
}
