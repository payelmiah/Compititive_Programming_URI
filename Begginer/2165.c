#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char s[600];
    gets(s);
    l=strlen(s);
    if(l<=140) printf("TWEET\n");
    else printf("MUTE\n");

}
