#include<stdio.h>
int main()
{
    int a[4],i,j,b;
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=0; i<3; i++)
    {
        j=i+1;
        while(j--&&a[i]>a[i+1])
        {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
            i--;
        }
    }

    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    main();
    return 0;

}
