#include<stdio.h>
int main()
{
   long long int a,b,i,e;
    int r,c,c1,c2,c3,c4,c5,c6,c7,c8,c9,count;
    while(scanf("%lld%lld",&a,&b))
    {
        c=c1=c2=c3=c4=c5=c6=c7=c8=c9=0,count=0;
        if(a==0&&b==0) break;
        for(i=a;i<=b;)
        {
            count++;
            if(count==1)
            {
                 e=i;
            }
            r=e%10;
            e=e/10;
            if(r==0) c++;
            else if(r==1) c1++;
            else if(r==2) c2++;
            else if(r==3) c3++;
            else if(r==4) c4++;
            else if(r==5) c5++;
            else if(r==6) c6++;
            else if(r==7) c7++;
            else if(r==8) c8++;
            else if(r==9) c9++;
            if(e==0)
            {
                i++;
                count=0;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",c,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    }
    return 0;
}
