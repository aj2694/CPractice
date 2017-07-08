/*One classic method for composing secret messages is called a square code.  The spaces are removed from the english text
and the characters are written into a square (or rectangle).  For example, the sentence "If man was meant to stay on the
ground god would have given us roots" is 54 characters long, so it is written into a rectangle with 7 rows and 8 columns.
                ifmanwas
                meanttos
                tayonthe
                groundgo
                dwouldha
                vegivenu
                sroots
The coded message is obtained by reading down the columns going left to right.   For example, the message above is coded as:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn  sseoau

In your program, have the user enter a message in english with no spaces between the words.  Have the maximum message length be 81
characters.  Display the encoded message. (Watch out that no "garbage" characters are printed.)    Here are some more examples:
 Input                                           Output
haveaniceday                                    hae and via ecy
feedthedog                                      fto ehg ee  dd
chillout                                        clu hlt io
*/
#include<stdio.h>

void main()
{
   char a[10][10]={0},c[7][8]={0},i,j,k,temp,t,num,*ptr,*ptr1;
   printf("enter the elements of the array");
   gets(a);
   ptr=a;
   ptr1=a;
   do
   {
       if(*ptr!=' ')
       {
          *ptr1=*ptr;
           ptr1++;
           ptr++;
       }
       else
       {
           ptr++;
       }

   }while(*ptr!='\0');
   while(*ptr1!='\0')
   {
       *ptr1=0;
       *ptr1++;
    }
strcpy(c,a);
 for(i=0;i<7;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%c",c[i][j]);
        }printf("\n");
    }
for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%c",c[j][i]);
        }printf("\t");
    }
}
