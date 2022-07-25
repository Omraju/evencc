#include <stdio.h>

void main()
{
   //hello
   int i,n;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
   }

} 
