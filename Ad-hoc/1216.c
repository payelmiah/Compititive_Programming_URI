#include<stdio.h>
int main()
{
    char s[1000];
    double sum=0.0,a,count=0;
    while(scanf("%[^\n]",s)!=EOF)
    {

        scanf("%*c%lf%*c",&a);
        sum+=a;
        count++;

    }
    printf("%.1lf\n",sum/count);
    return 0;
}
