#include<stdio.h>
int recures(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*recures(a-1);
    }
}
int main()
{
    int a,i;
    for(i=1;i<=2;i++)
    {
        scanf("%d",&a);

    }
    printf("%d\n",recures(a));

}
