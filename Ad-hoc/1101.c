#include<stdio.h>
int main()
{
    int a,b,i,j,c,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    c=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
    scanf("%d%d",&a,&b);

    for(i=a;i<(a+b);i++)
    {
        if(i==0)
        {
            c++;
        }
        else if(i==1)
        {
            c1++;
        }
        else if(i==2)
        {
            c2++;
        }
        else if(i==3)
        {
            c3++;
        }
        else if(i==4)
        {
            c4++;
        }
        else if(i==5)
        {
            c5++;
        }
        else if(i==6)
        {
            c6++;
        }
        else if(i==7)
        {
            c7++;
        }
        else if(i==8)
        {
            c8++;
        }
        else if(i==9)
        {
            c9++;
        }

    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",c,c1,c2,c3,c4,c5,c6,c7,c8,c9);
}

