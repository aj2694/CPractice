
#include<stdio.h>
#include<string.h>

int main()
{
	int num1,num2,num3,i;
	int abNum;
	char date[20];
	char month[3]="",year[5]=" ",*ptr;
	char *arr[12];
	arr[0]="January";
	arr[1]="February";
	arr[2]="March";
	arr[3]="April";
	arr[4]="May";
	arr[5]="June";
	arr[6]="July";
	arr[7]="August";
	arr[8]="September";
	arr[9]="October";
	arr[10]="November";
	arr[11]="December";

	//Program that finds the maximum of three numbers using tertiary operator
	printf("Enter 3 numbers");
	scanf("%d %d %d",&num1,&num2,&num3);
	num1>num2?(num1>num3?printf("num1 is greatest"):printf("num3 is greatest")):(num2>num3?printf("num2 is greatest"):printf("num3 is 		greatest"));

	
	//Program that returns the name of the month and the number of days in it
	printf("Enter a date in dd/mm/yyyy format");
	scanf("%s",date);
	ptr=date;
	for(i=0;i<3;i++)
	{
		ptr++;
		
	}
	strncpy(month,ptr,2);
	
	ptr++;
	ptr++;
	ptr++;
	strncpy(year,ptr,4);
	num1=atoi(month);
	num2=atoi(year);
	if(num2%4==0)
		{
			printf("leap year\n");
			if(num1==2)
			{
				printf("%s has 29 days\n",arr[num1-1]);
			}
			else if(num1==1||num1==3||num1==5||num1==7||num1==8||num1==10||num1==12)
			{
				printf("%s has 31 days\n",arr[num1-1]);
			}
			else
			{
				printf("%s has 30 days\n",arr[num1-1]);
			}
		
		}
	else{
		if(num1==1||num1==3||num1==5||num1==7||num1==8||num1==10||num1==12)
		{
			printf("%s has 31 days\n",arr[num1-1]);
		}
		else if(num1==2)
		{
			printf("%s has 28 days\n",arr[num1-1]);
		}
		else
		{
			printf("%s has 30 days\n",arr[num1-1]);
		}
	}
		
	
 

return 0;

}

