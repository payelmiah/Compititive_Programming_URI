#include<stdio.h>
int main()
{
    int i,n,j,k,a[100],b[100],c=0,f=0;
    scanf("%d",&n);
    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            scanf("%d",&a[j]);
        },
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n+1; j++)
        {
            f++;
            if(a[j]==1)
            {
                count++;
            }
            if(b[i]==1)
            {
                count++;
            }
            if(f==2)
            {
                if(count>=2)
                {
                    printf("S");
                }
                else
                {
                    printf("U");
                }
                f=0;
                count=0;
                j--;
            }
        }
    }
}
