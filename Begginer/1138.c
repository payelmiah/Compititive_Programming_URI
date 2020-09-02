#include<stdio.h>
int main()
{
    long long int w,b,r,i,j;
    while(scanf("%lld%lld",&w,&b))
    {
        long long int count=0,u,c,c1,c2,c3,c4,c5,c6,c7,c8,a[100000],q;
        u=c=c1=c2=c3=c4=c5=c6=c7=c8=0;
        if(w==0&&b==0)
            break;

        for(i=w,j=0; i<=b; i++,j++)
        {
            a[j]=i;
            count++;
        }
        for(i=0; i<count; i++)
        {
            q=a[i];
            while(q!=0)
            {

                r=q%10;
                q=q/10;
                if(r==0)
                {
                    u++;
                }
                else if(r==1)
                {
                    c++;
                }
                else if(r==2)
                {
                    c1++;
                }
                else if(r==3)
                {
                    c2++;
                }
                else if(r==4)
                {
                    c3++;
                }
                else if(r==5)
                {
                    c4++;
                }
                else if(r==6)
                {
                    c5++;
                }
                else if(r==7)
                {
                    c6++;
                }
                else if(r==8)
                {
                    c7++;
                }
                else if(r==9)
                {
                    c8++;
                }

            }
        }

        printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n",u,c,c1,c2,c3,c4,c5,c6,c7,c8);
    }
    return 0;
}
