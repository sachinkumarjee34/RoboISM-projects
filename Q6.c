#include <stdio.h>
int main()
{
   int num1, num2, data, i, j;
 
   
   printf("Enter two range(input integer numbers only):");
   scanf("%d %d", &num1, &num2);
 
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
      data=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
           data=1;
            break;
         }
      }
      if(data==0)
         printf("%d\n",i);
  }
  return 0;
}