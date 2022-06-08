#include <stdio.h>
int function(int a, char b, int c)
{
    int result;
    if (b == '+')
    {
        result = a + c;
        printf("The result is %d\n", result);
    }
    else if (b == '-')
    {
        result = a - c;
        printf("The result is %d\n", result);
    }
    else if (b == '/')
    {
        result = a / c;
        printf("The result is %d\n", result);
    }
    else if (b == '*')
    {
        result = a * c;
        printf("The result is %d\n", result);
    }
}
int main()
{
    int a, c;
    char b;
    printf("what operation to be performed?\n");
    scanf("%c", &b);

    printf("Enter the value of two Paramerters a and b\n");
    scanf("%d %d", &a, &c);

    function(a, b, c);
    return 0;
}