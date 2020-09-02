#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char s[1000];
    while(gets(s))
    {
        int c=0,v=0;
        if(s[0]=='*') break;

        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==' ')
            {
                if(s[0]==s[i+1] || s[0]==s[i+1]-32 || s[0]==s[i+1]+32)
                {
                    c=1;
                }
                else
                {
                    v=1;
                }
            }
            else
            {
                c=1;
            }

        }
        if(c==1 && v==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
