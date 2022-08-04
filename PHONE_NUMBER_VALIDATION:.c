#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n;
    scanf("%s",s);
    n=strlen(s);
    if(n==10)
    printf("Valid");
    else if(s[0]==0)
    printf("Invalid");
    else
    printf("Invalid");
}