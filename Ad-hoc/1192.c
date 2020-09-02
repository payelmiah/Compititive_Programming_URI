#include<stdio.h>
int main()
{
    int a,b,t;
    char ch;
    scanf("%d",&t);
    while(t--){
    scanf("%d%c%d",&a,&ch,&b);
    if(ch>='A' && ch<='Z')
    {
        if(a==b) printf("%d\n",a*b);
       else printf("%d\n",b-a);
    }
    else
    {
        if(a==b) printf("%d\n",a*b);
        else printf("%d\n",a+b);
    }
    }
    return 0;
}
