#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char s[600];
    gets(s);
    l=strlen(s);
    if(l<=80) printf("YES\n");
    else printf("NO\n");
    return 0;
}
