#include <stdio.h>    
     
int main()    
{    
         
    int arr[] = {5,7,8,7,7,5,3,8,9,01,5,8,6,4,7,8};     
        
       
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Duplicate elements in given array: \n");    
        
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  