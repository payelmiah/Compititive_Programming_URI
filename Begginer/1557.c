#include<stdio.h>
int main()
{
    int a,t;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        int a[t*t],i,j,c=0,c1=0;
        a[0]=1;
        for(i=1,j=2;i<=t*t;i++,j*=2)
        {
            a[i]=j;
        }
        for(i=0;i<t*t;)
        {
            c++;
            printf("%d",a[i]);
            if(c==t)
            {
                c1++;
                c=0;
                i=0;
                i+=c1;
                printf("\n");
                if(c1==t)
                {
                    break;
                }
                continue;
            }
            i++;
        }
        printf("\n");
    }
}
