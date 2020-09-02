#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,k,l1;
    char s[1000],s1[1000];
    while(scanf("%s%s",s,s1)!=EOF)
    {
        int c=0,c1=0,count=0,count1=0;
        l=strlen(s);
        l1=strlen(s1);
        for(i=0,j=0;i<l1;)
        {
            if(s[j]==s1[i])
            {
                c++;
                if(c==l)
                {
                    count++;
                }
                j++;
                i++;
                continue;

            }
            else
            {
                c=0;
                j=0;
                continue;

            }
        }
        printf("%d\n",count);
    }
}
