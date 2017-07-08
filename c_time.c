//Program showing how to get current time
#include <stdio.h>
#include <time.h>//header file

void main()
{
time_t t;//variable of the time type
time(&t);//time is a function to get current time
printf("Today's date and time : %s",ctime(&t));//ctime is a function to convert time into string
getch();
}
