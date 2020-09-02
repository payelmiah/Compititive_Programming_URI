#include<stdio.h>
int main()
{
    int n,t,p;
    double o=0,m=0,y=0,u=0,h=0,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&p);
        if(n==1001)
        {
            m=p*1.50;
        }
        else if(n==1002)
        {
            o=p*2.50;
        }
        else if(n==1003)
        {
            u=p*3.50;
        }
        else if(n==1004)
        {
            h=p*4.50;
        }
        else if(n==1005)
        {
            y=p*5.50;
        }
    }
    sum=m+o+u+h+y;
    printf("%.2lf\n",sum);
    return 0;

}
