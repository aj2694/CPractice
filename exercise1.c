
/*This program covers all the basics concepts of C like user input, loops, selection statements, functions each function shows a different logic.This can be used as a at a glance revision of C basics*/

#include<stdio.h>
#define pi 3.14

//Program to find radius of circle
void areaofcircle()
{
	float rad,area;
	printf("Enter the radius of circle\n");
	scanf("%f",&rad);
	area=pi*rad*rad;
	printf("Area of the circle is:%0.1f\n",area);
}

//Program showing use of tertiary operator to find maximum of two numbers
void findmax()
{
	int num1,num2;
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);
	num1>num2?printf("Num 1 is bigger\n"):num1==num2?printf("Both numbers are equal\n"):printf("Num 2 is bigger\n");

}

//Program to show if a number is odd or even
void oddeven()
{
	int inputnum;	
	printf("Enter a number you wish to check\n");
	scanf("%d",&inputnum);
	if(inputnum==0)
	{
		printf("The number you entered is neither odd nor even\n");
	}
	else if(inputnum%2==0)
	{
		printf("%d is even\n",inputnum);
	}
	else
	{
		printf("%d is odd\n",inputnum);
	}
}

//Function to check if a number is positive or negative
void checksign()
{
	int checksign;
	printf("Enter the number you want to check\n");
	scanf("%d",&checksign);
	if(checksign<=0)
	{
		if(checksign==0)
		{
			printf("The number you entered is 0 no sign\n");
		}
		else
		{
			printf("%d is negative\n",checksign);
		}
	}
	else
	{
		printf("%d is positive",checksign);
	}
}	

//Print the multiples of a number less than 100
void multiplytable()
{
	int mulnum,i;
	printf("Enter the number you wish to find the multiples of\n");
	scanf("%d",&mulnum);
	for(i=0;;i++)
	{
		if(mulnum*i<=100)
		{
			printf("%d *%d=%d\n",mulnum,i,mulnum*i);
		}
		else
		{
			break;
		}
	}
}

//Function to find sum of even numbers less than 20			
void sumlessthan20()
{
	int i,sum;
	for(i=2;i<=20;i++)
	{
		sum=sum+i;
	}
	printf("Sum of even numbers less than 20 =%d\n",sum); 
}

//Function to find factorial
void initfact()
{
	int fact,res;	
	printf("Enter the number you wih to find the factorial of\n");
	scanf("%d",&fact);
	res=factorial(fact);
	printf("Factorial =%d\n",res);
}
int factorial(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}

//Function to find prime num or not	
void checkprime()
{
	int num3,i;
	printf("Enter the number you which you want to check \n");
	scanf("%d",&num3);
	if(num3==0)
	{
		checkprime();
	}
	
	for(i=2;i<=num3/2;i++)
	{
		if(num3%i==0)
		{
			printf("%d is not prime, its smallest factor after 1 is %d",num3,i);
			break;
		}
		else if(i==num3/2)
		{
			printf("%d is prime",num3);
		}			
	}
}
//Function to find sum of digits
void sumofdigits()
{
	int num,sum=0;
	printf("Enter the number");
	fflush(stdin);
	scanf("%d",&num);
	while(num>0)
	{
		sum=sum+num%10;
		num=num/10;
	}
	printf("Sum of digits is %d",sum);
}

int main()
{
	int choice;
	
	printf("Welcome to basics of c language\nPlease choose one of the following:\n");
	printf("1.Find radius of circle\n2.Find maximum of two numbers\n3.Find if a number is odd or even\n4.Check if a number is positive or 			negative\n5.Print the multiples of a number less than 100\n6.Find sum of even numbers less than 20\n7.Find factorial\n8.Find 			prime num or not\n9.Find sum of digits");

	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		{
			areaofcircle();
			break;
		}
		case 2:
		{
			findmax();
			break;
		}
		case 3:
		{
			oddeven();
			break;
		}
		case 4:
		{
			checksign();
			break;
		}
		case 5:
		{
			multiplytable();
			break;
		}
		case 6:
		{
			sumlessthan20();
			break;
		}
		case 7:
		{
			initfact();
			break;
		}
		case 8:
		{
			checkprime();
			break;
		}
		case 9:
		{
			sumofdigits();
			break;
		}
	}
		
			
	return 0;
}
