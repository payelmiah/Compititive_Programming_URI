#include<stdio.h>
int main()
{
    int n,a;
    while(scanf("%d",&n)!=EOF)
    {
        scanf(":%d",&a);
        if(n==7) printf("Atraso maximo: %d\n",a);
        else if(n==8) printf("Atraso maximo: %d\n",a+60);
        else if(n==9) printf("Atraso maximo: 120\n");
        else printf("Atraso maximo: 0\n");
    }
    return 0;
}
