#include<stdio.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i-1];
    }
    printf("%s\n",s);
}
