#include<stdio.h>
int main()
{
    int x,y,i,k,sum=0;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&y);
        if(y<=0)
        {
            continue;
        }
        else break;
    }
    for(i=x,k=1;k<=y;i++,k++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
