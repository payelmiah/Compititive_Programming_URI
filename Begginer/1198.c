#include<stdio.h>
int main()
{
   long long int h,o,temp;
    while(scanf("%lld%lld",&o,&h)!=EOF)
    {
        if(o>h)
        {
            temp=h;
            h=o;
            o=temp;
            printf("%lld\n",h-o);
        }
        else
        {
            printf("%lld\n",h-o);
        }

    }
    return 0;
}
