#include<stdio.h>
int main()
{
    int a[20],i=0,j=0,n,w,r,r1=0,l;
    char s[20];
    scanf("%d",&n);
    while(n!=0)
    {
        s[i]=n%2;
        n=n/2;
        i++;
    }
     l=strlen(s);
     for(i=0;i<l;i++)
     {
         printf("%s",s);
     }
}
