#include<stdio.h>
int main()
{
    int a,b,c,d,n,t,i,j,sum=0,k=0,l,m,arr[51],count=0,g=0;
    while(scanf("%d%d",&t,&d)!=EOF)
    {

        for(i=1; i<=d; i++)
        {
            scanf("%d/%d/%d",&a,&b,&c);
            arr[k]=a;
            arr[k+1]=b;
            arr[k+2]=c;
            for(j=1; j<=t; j++)
            {
                scanf("%d",&n);
                sum+=n;
            }
            if(sum==t)
            {
                l=k;
                m=sum;
            }
            sum=0;
            k+=3;
        }
        if(m==t)
        {
            printf("%d/%d/%d\n",arr[l],arr[l+1],arr[l+2]);
        }
        else
        {
            printf("Pizza antes de FdI\n");
        }
        m=l=k=0;

    }

    return 0;
}
