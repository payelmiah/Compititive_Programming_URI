#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,m,l=0;
    int t;
    char s[100],st[6],str[100],stre[6];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s%s%s%s",s,st,str,stre);
        scanf("%lld%lld",&n,&m);
        l=n+m;
        if(st[0]=='I')
        {
            if(l%2==0)
            {
                printf("%s\n",str);
            }
            else
            {
                printf("%s\n",s);
            }
        }
        else
        {
            if(l%2==0)
            {
                printf("%s\n",s);
            }
            else
            {
                printf("%s\n",str);
            }
        }
    }
    return 0;
}
