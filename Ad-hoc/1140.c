#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    while(1)
    {
        int count=0,i,l=0,k=0;
        gets(s);
        if(s[0]=='*')
            break;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                k++;
                continue;
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                count++;
            }

        }
        //printf("l:%d\nk:%d\ncount:%d\n",l,k,count);
        if((l-k)==count)
            printf("N\n");
        else
            printf("Y\n");

    }
    return 0;
}
