#include<stdio.h>
int main()
{
    long long int f=1,n,s,i,f1=1,j,l=0;
   while(scanf("%lld%lld",&n,&s)!=EOF){
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    for(j=1;j<=s;j++)
    {
        f1=f1*j;
    }
    l=f+f1;
    printf("%lld\n",l);
    l=0;
    f=1;
    f1=1;
   }
   return 0;
}
