#include<stdio.h>
#include<math.h>
int main()
{
    double p,q,m;
    int n;
    scanf("%d",&n);
    p=pow((1+sqrt(5))/2,n);
    q=pow((1-sqrt(5))/2,n);
    m=(p-q)/sqrt(5);
    printf("%.1lf\n",m);
    return 0;

}
