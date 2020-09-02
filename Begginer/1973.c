#include<stdio.h>
int fun(long long int a)
{
    long long int n1,sum1=0;
    while(a--)
    {
        scanf("%lld",&n1);
        sum1+=n1;
    }
    return sum1;
}
int main()
{
    long long int a,n,sum=0,y=0;
    int count=0,flag=0,t;
    scanf("%lld",&a);
    while(a--)
    {

        scanf("%lld",&n);

        if(n%2==0|| n==0)
        {

            sum=sum-count;
            sum+=n-1;
            flag++;
            y=fun(a);
            break;

        }
        else
        {
            t=n-1;
            sum+=n-1;
            if(t==0)
            {
                count=0;
            }
            else
            {
                count++;
            }
            flag++;
        }

    }
    printf("%d %lld\n",flag,(sum+y));
    return 0;
}
