#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0,sum=0;
    char s[100];
    while(1)
    {

        scanf(" %[^\n]",s);
        if(!strcmp(s,"caw caw"))
        {
            count++;
            if(count==3)
            {
                printf("%d\n",sum);
                break;
            }
            else
            {
                 printf("%d\n",sum);
                 sum=0;
            }
        }
        if(s[2]=='*')
        {
            sum+=1;
        }
        else
        {
            sum+=0;
        }
        if(s[1]=='*')
        {
            sum+=2;
        }
        else
        {
            sum+=0;
        }
        if(s[0]=='*')
        {
            sum+=4;
        }
        else
        {
            sum+=0;
        }

    }
    return 0;
}
