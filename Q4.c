  #include<stdio.h>
#include<malloc.h>
#define len 10
int main()
{
        char *destValue;
        char *srcValue;

        srcValue = malloc(len * sizeof(char));
        destValue = malloc((2 * len * sizeof(char)) + 1);
        
        printf("Please enter valid text: " );
        scanf("%s", srcValue);
        int j = 0;
        for(int i = 0  ;srcValue[i]!= '\0';i++) {
                destValue[j++]= srcValue[i];
                destValue[j++]= srcValue[i];
        }

        destValue[j]='\0';
        puts(destValue);

        free(destValue);
        free(srcValue);
        return 0;
}
