#include<stdio.h>
int main()
{
    int n,i,X;
    while(scanf("%d",&n)!=EOF)
    {
        X=log2(n);
        printf("%d\n",X);
    }
    return 0;
}
