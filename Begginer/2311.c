#include<stdio.h>
int main()
{
    int n,i,k;
    double d,a[8],max,min,sum=0;
    char str[50];
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        int j=0,q=0,c=0;
        scanf("%s",str);
        scanf("%lf",&d);
        for(i=0;i<7;i++)
        {
            scanf("%lf",&a[i]);
        }
       min=max=a[0];
        for(i=1;i<7;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
        for(i=0;i<7;i++)
        {
            if(a[i]==max||a[i]==min) continue;
            sum+=a[i];
        }
        printf("%s %.2lf\n",str,sum*d);
        sum=0;
    }
    return 0;
}
