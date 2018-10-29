
#include <stdio.h>
#include <stdlib.h>


int main()
{
        int j,k=0;
        int sayi;
        int i=1;
        printf("sayi gir lan");
        scanf("%d",&sayi);
        for(sayi=sayi; sayi<999; sayi++)
        {if (i == 12) break;
         for(j=1; j<=sayi; j++)
         {
                 if(sayi%j==0)
                         k++;

         }
         if(k==2)
         {

                 k=sayi;
                 printf("%d asal sayıdır\n",k);

                 i++;

         }
         k=0;}
}
