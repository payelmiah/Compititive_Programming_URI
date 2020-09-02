#include<stdio.h>
int main()
{
    int n;
    char s[1000];
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %[^\n]",s);
        printf("I am Toorg!\n");
    }
    return 0;
}
