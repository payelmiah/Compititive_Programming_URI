#include<stdio.h>
int main()
{
    char s[27];
    int n,i,t;
    while(scanf("%s",s)!=EOF)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&t);
            printf("%c",s[t-1]);
        }
        printf("\n");
    }
    return 0;
}
