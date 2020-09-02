#include<stdio.h>
int main()
{
    float v,d,area,height,p;
    while(scanf("%f%f",&v,&d)!=EOF)
    {
        p=d/2;
        area=(3.14*p*p);
        height=v/area;
        printf("ALTURA = %.2f\n",height);
        printf("AREA = %.2f\n",area);
    }
    return 0;
}
