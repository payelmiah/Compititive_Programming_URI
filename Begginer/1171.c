#include<stdio.h>
int main()
{
    int b,t,i,j,g;
    scanf("%d",&t);
    int a[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<t; i++)
    {
        j=i+1;
        while(j--&&a[i]>a[i+1])
        {
            g=a[i];
            a[i]=a[i+1];
            a[i+1]=g;
            i--;
        }
    }

    for(i=0; i<t; i++)
    {
        int count=0;
        b=a[i];
        for(j=0; j<t; j++)
        {
            if(b==a[j])
            {
                count++;
            }
        }
        if(a[i]==a[i+1])
        {

                continue;
        }
        else
        {
            printf("%d aparece %d vez(es)\n",a[i],count);
        }

    }
    return 0;
}
