#include<stdio.h>
#include<string.h>
char *conv(char s[])
{
    int i=0;
    for(i=0;i<12;i++)
    {
        s[i]='*';
    }
    return s;
}
int main()
{
    int i;
    char s[17];
    scanf("%s",s);
    printf("%s",conv(s));

}