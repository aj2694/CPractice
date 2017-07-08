/*Pyramid program for
           11
          2112
         321123
        43211234
        */
    #include <stdio.h>
    void main()
    {
     int i,j,k,t;
     for(i=1;i<=5;i++)
     {
         for(j=5;j>=1;j--)
         {
             if (i<=j)
             {

                printf("  ");

             }
             else
             {
                 printf(" %d",j);
             }

         }
         for(k=1;k<i;k++)
         {
                printf("%d ",k);

         }
         printf("\n");

             }

    }
