#include<stdio.h>
int main()
{
    int i,t,j,k=1,c=1;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)
        {
            printf("Caso %d: %d numero\n",k,c);
            printf("0\n\n");
        }
        else
        {
            printf("Caso %d: ",k);
            for(i=0;i<=t;i++)
            {
                for(j=0;j<i;j++)
                {
                    c++;
                }
            }
            printf("%d numeros\n",c);
            printf("0");
            for(i=0;i<=t;i++)
            {
                for(j=0;j<i;j++)
                {
                    printf(" %d",i);
                }
            }
            printf("\n\n");
        }c=1;
        k++;
    }
    return 0;
}
