#include<stdio.h>
int main()
{
    int t,n,i,f=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            printf("Not prime\n");

        }
        else if(n==1)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
        f=0;
    }

}
