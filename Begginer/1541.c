#include<stdio.h>
int main()
{
    int a,b,c,i,count=0;
    double area;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0) break;
        scanf("%d%d",&b,&c);
        area=(a*b*100.0)/c;
        for(i=1;(i*i)<=area;i++)
        {
              count++;

        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
