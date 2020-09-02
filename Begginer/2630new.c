#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j=1,sum1,dol1,min1,max1;
    char s[10];
    scanf("%d",&t);
    double a[4],sum=0,max=0,min=0,dol=0;
    while(t--)
    {
        scanf(" %[^\n]",s);
        for(i=0; i<3; i++)
        {
            scanf("%lf",&a[i]);
            sum+=a[i];
        }
        max=min=a[0];
        for(i=1; i<3; i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
       //(int)sum;
        sum1=sum/3;
        dol=(0.30*a[0]+0.59*a[1]+0.11*a[2]);
        min1=min;
        max1=max;
        dol1=dol;
        if(!stricmp(s,"min"))
        {
            printf("Caso #%d: %d\n",j,min1);
        }
        else if(!stricmp(s,"max"))
        {
            printf("Caso #%d: %d\n",j,max1);
        }
        else if(!stricmp(s,"mean"))
        {
            printf("Caso #%d: %d\n",j,sum1);
        }
        else if(!stricmp(s,"eye"))
        {
            printf("Caso #%d: %d\n",j,dol1);
        }
        j++;
        sum=0;

    }
}
