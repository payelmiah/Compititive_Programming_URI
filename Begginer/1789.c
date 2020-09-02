#include<stdio.h>
int main()
{
    int n,v[1000],i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&v[i]);

        }
        int max=v[0];
        for(i=1; i<=n; i++)
        {
            if(v[i]>max)
            {
                max=v[i];
            }
        }
        if(max<10)
        {
            printf("1\n");
            max=0;
        }
        else if(max>=10 && max<20)
        {
            printf("2\n");
            max=0;
        }

        else
        {
            printf("3\n");
            max=0;
        }

    }
    return 0;
}
