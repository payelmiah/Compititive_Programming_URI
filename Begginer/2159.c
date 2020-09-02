#include<stdio.h>
#include<math.h>
int main()
{
    double l,n,p,m;
    scanf("%lf",&n);
    p=n/log(n);;
    m=(p*1.25506);
    printf("%.1lf %.1lf\n",p,m);
    return 0;
}
