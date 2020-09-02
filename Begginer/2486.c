#include<stdio.h>
int main()
{
    int t,n,sum=0;
    while(scanf("%d",&t))
    {
        if(t==0)
            break;
          char s[20];
        while(t--)
        {
            scanf("%d",&n);
            scanf(" %[^\n]",s);
            if(!strcmp(s,"suco de laranja"))
            {
                sum=sum+n*120;
            }
            else if(!strcmp(s,"morango fresco"))
            {
                sum=sum+n*85;
            }
            else if(!strcmp(s,"mamao"))
            {
                sum=sum+n*85;
            }
            else if(!strcmp(s,"goiaba vermelha"))
            {
                sum=sum+n*70;
            }
            else if(!strcmp(s,"manga"))
            {
                sum=sum+n*56;
            }
            else if(!strcmp(s,"laranja"))
            {
                sum=sum+n*50;
            }
            else if(!strcmp(s,"brocolis"))
            {
                sum=sum+n*34;
            }
        }
        if(sum>130)
        {
            sum=sum-130;
            printf("Menos %d mg\n",sum);

        }
        else if(sum<110)
        {
            sum=110-sum;
            printf("Mais %d mg\n",sum);

        }
        else
        {
            printf("%d mg\n",sum);
        }
        sum=0;
    }
    return 0;
}

