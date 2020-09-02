#include<stdio.h>
#include<string.h>
int main()
{
    int a,t;
    char s[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",s,&a);

        if(!strcmp(s,"Thor")) printf("Y\n");

        else  printf("N\n");


    }
    return 0;
}
