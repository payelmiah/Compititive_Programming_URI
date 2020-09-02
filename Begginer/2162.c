#include<stdio.h>
int main()
{
    int i,t,c=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<t-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c=1;
            break;
        }
    }
    printf((c==1)?"0\n":"1\n");
    return 0;

}
