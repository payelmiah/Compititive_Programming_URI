#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    double l;
    char s[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        printf("%.2lf\n",l/100.00);
    }
    return 0;
}
