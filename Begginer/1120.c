#include<stdio.h>
int main()
{
    long long int r1=0,rem,r,rem1,m,count=0;
    int n;
    while(scanf("%d %lld",&n,&r))
    {
        while(r!=0)
        {
            rem=r%10;
            r1=r1*10+rem;
            r=r/10;

        }
        while(r1!=0)
        {
            m=r1%10;
            r1=r1/10;
            if(n!=m)
            {
                if(m==0)
                {
                    printf("0\n");
                    count=1;
                    break;
                }
                printf("%lld",m);
                count=1;
            }

        }
        if(count==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
