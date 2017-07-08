/*
 In the game of chess, a queen can attack pieces which are on the same row, column, or diagonal.
 A chessboard can be represented by an 8 by 8 array. A 1 in the array represents a queen on the corresponding square,
 and a O in the array represents an unoccupied square. Your program is to read the location of two queens and then update
 the array appropriately.
 Then process the board and indicate whether or not the two queens are positioned so that they attack each other.
*/
#include<stdio.h>
void main()
{
    int a[8][8],i1,j1,i2,j2,i,j,temp;
    printf("enter the position of queen1");
    scanf("%d",&i1);
    scanf("%d",&j1);
    printf("enter the position of queen2");
    scanf("%d",&i2);
    scanf("%d",&j2);
    a[i1][j1]=1;
    a[i2][j2]=1;
    if(i1<i2)
        temp=i1;
    else
        temp=i2;
 if(i1==i2)
 {
     printf("same row can attack ");

 }
 else if(j1==j2)
 {
     printf("same column can attack");
 }
 else
 {
     for(i=temp+1,j=j1-1;i<8&&i,j<8&&j>0>0;i++,j--)
     {

             if(a[i1][j1]==a[i][j])
             {
                 printf("diagonal attack");
                 break;

             }
             else
             {
                 printf("cannot attack");
                 break;
             }
    }
}

}
