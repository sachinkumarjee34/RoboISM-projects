#include<stdio.h>  
int main()
{
   
    char str[100] = "S1A2C3H4I5N6";
    int i,sum = 0;
    
   
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9')) 
        {
            
            sum += (str[i] - '0');
        }
    }
    
    printf("Sum of all digits:\n%d", sum);
    return 0; 
}
