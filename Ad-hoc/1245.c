#include<stdio.h>
#include<string.h>
int main()
{
    int c,i,j;
    while(scanf("%d",&c))
    {
        int a[c],count=0;
        char s[c],ch;
        for(i=0;i<c;i++)
        {
            scanf("%d %c",&a[i],&ch);
            s[i]=ch;
        }


        for(i=0;i<c-1;i++)
        {

            if(a[i]==0) continue;

            for(j=i+1;j<c;j++)
            {


                if(a[i]==a[j]&&s[i]!=s[j])
                {
                    count++;
                    a[j]=0;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
