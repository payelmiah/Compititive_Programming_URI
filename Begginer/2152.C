#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<10 && b<10 && c>0)
        {
            printf("0%d:0%d - A porta abriu!\n",a,b);

        }
        else if(c==0 && a>10 && b>10)
        {
            printf("%d:%d - A porta fechou!\n",a,b);
        }
        else if(c==0 && a<10 && b<10)
        {
            printf("0%d:0%d - A porta fechou!\n",a,b);
        }
        else if(a>9 && b<10 && c>0)
        {
            printf("%d:0%d - A porta abriu!\n",a,b);
        }
        else if(a<10 && b>9 && c>0)
        {
            printf("0%d:%d - A porta abriu!\n",a,b);
        }
        else if
        else
        {
            printf("%d:%d - A porta abriu!\n",a,b);
        }

    }
    return 0;
}
