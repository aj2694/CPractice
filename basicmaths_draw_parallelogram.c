//Program to draw parallelogram
 #include<stdio.h>
 void main()
 {
     int length,width,c1=218,c2=191,c3=192,c4=217,l1=179,l2=196,i,j;
     printf("enter length" );
     scanf("%d",&length);
     printf("enter width" );
     scanf("%d",&width);
     printf("%c",c1);
     for(i=1;i<=length;i++)
     {
         printf("%c",l2);
     }
     printf("%c\n",c2);
     for(j=1;j<width;j++)
     {
         printf("%c",l1);
           for(i=1;i<=length;i++)
     {
         printf(" ");
     }

        printf("%c",l1);
        printf("\n");
     }
     printf("%c",c3);
      for(i=1;i<=length;i++)
     {
         printf("%c",l2);
     }
      printf("%c",c4);


 }
