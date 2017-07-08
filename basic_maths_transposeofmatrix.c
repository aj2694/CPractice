//Program to find transpose of matrix
#include <stdio.h>
int* accept(int *,int,int);
int* display(int *,int,int);
int* transpose(int *,int,int);

void main()
{
    int i,j,rows,cols,*ptr,*ptr2;
    int arr[10][10];
    printf("enter the rows");
    scanf("%d",&rows);
    printf("enter the cols");
    scanf("%d",&cols);
    ptr=accept(arr,rows,cols);
    display(ptr,rows,cols);
   transpose(ptr,rows,cols);
     getch();
}

int* display(int *ptr,int rows,int cols)
{
    int i,j ;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
        printf("%d\t",*(ptr+j)+i);
        }printf("\n");
    }
}

int* accept(int *ptr1,int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {

                    scanf("%d",(ptr1+i)+j);
        }
    }
    return ptr1;
}

int* transpose(int* ptr2,int rows,int cols)

{

int i ,j;

 for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
           *((ptr2+i)+j)=*((ptr2+j)+i);
            printf("%d\t",*(ptr2+i)+j);
        }printf("\n");
    }

}
