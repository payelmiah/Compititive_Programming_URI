#include<stdio.h>
int main()
{
    int a[20],i,j,k,p;
    double b[20];
    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        scanf("%d%lf",&a[i],&b[i]);
    }
    int max=b[0];
    for(i=0; i<k; i++)
    {
        if(max<b[i])
        {
            max=b[i];
            p=i;
        }
    }
    for(i=0; i<k; i++)
    {
        if(max>=8)
        {
            if(p==i)
            {
                printf("%d",a[i]);
            }
        }
        else
        {
            printf("Minimum note not reached\n");
        }

    }
    main();
    return 0;
}
