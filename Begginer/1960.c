#include<stdio.h>
int main()
{
    int n,q,w,e,r,t,y,u,i,o;
    scanf("%d",&n);
    q=n/1000;
    n=n%1000;
    w=n/500;
    n=n%500;
    e=n/100;
    n=n%100;
    r=n/50;
    n=n%50;
    t=n/10;
    n=n%10;
    y=n/5;
    n=n%5;
    u=n%5;
    for(i=1; i<=q; i++)
    {
        printf("M");
    }
    for(i=1; i<=w; i++)
    {
        printf("D");
    }
    for(i=1; i<=e; i++)
    {
        printf("C");
    }
    for(i=1; i<=r; i++)
    {
        printf("L");
    }
    for(i=1; i<=t; i++)
    {
        printf("X");
    }
    for(i=1; i<=y; i++)
    {
        printf("V");
    }
    for(i=1; i<=u; i++)
    {
        printf("I");
    }
    printf("\n");
    main();
    return 0;

}
