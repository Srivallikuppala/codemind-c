#include<stdio.h>
int main()
{
    int i,found=0;
    char n,s[100]={'a','e','i','o','u','A','E','I','O','U',NULL};
scanf("%c",&n);

for(i=0;s[i]!=NULL;i++)
{
    
    if(n==s[i])
    {
        found=1;
    }
}

 if(found==1)
 printf("Vowel");
 else
printf("Consonant");

return 0;
}
