#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,i=1,min,max,k,a,b,c,sum,sum1;
    char s[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b&&a>=c)
        {
            max=a;
        }
        if(b>=a&&b>=c)
        {
            max=b;
        }
        if(c>=a&&c>=b)
        {
            max=c;
        }
        if(a<=b&&a<=c)
        {
            min=a;
        }
        if(b<=a&&b<=c)
        {
            min=b;
        }
        if(c<=a&&c<=b)
        {
            min=c;
        }
        sum=a+b+c;
        k=0.30*a+0.59*b+0.11*c;
        sum1=sum/3;
        if(!stricmp(s,"mean"))
        {
            printf("Caso #%d: %d\n",i,sum1);
        }
        else if(!stricmp(s,"min"))
        {
            printf("Caso #%d: %d\n",i,min);
        }
        else if(!stricmp(s,"max"))
        {
            printf("Caso #%d: %d\n",i,max);
        }
        else if(!stricmp(s,"eye"))
        {
            printf("Caso #%d: %d\n",i,k);
        }
        i++;
    }
    return 0;

}
