#include<stdio.h>
int main()
{
    int a[5],count=0,i,n;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;

}
