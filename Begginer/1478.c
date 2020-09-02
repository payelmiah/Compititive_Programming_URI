#include<stdio.h>
int main()
{
    int n,i,j,c=0,b,y=1;
    while(scanf("%d",&n))
    {

        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                printf("%3d",i+1);
                for(y=2; y<=n; y++)
                {
                    printf("   %d",y);
                }
                printf("\n");
            }
            else
            {

                j=i;
                int cout=0;
                for(j=i+1; j>0; j--)
                {
                    cout++;


                    if(cout==1)
                    {
                        printf("%3d",j);
                    }
                    else
                    {
                        printf("   %d",j);
                    }

                }
                for(int k=0,h=2; k<n-cout; k++,h++)
                {
                    printf("   %d",h);
                }
                printf("\n");
            }

        }
        printf("\n");

    }
    return 0;
}
