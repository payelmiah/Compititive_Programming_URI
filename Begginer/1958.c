#include<stdio.h>
int main()
{
    char s[100],s1[10];

    int c=0,i,j;
    gets(s);
        if(s[1]!='.')
        {
            for(i=0;s[i]!='\0';i++){
            c++;
            }
            for(j=0,i=0;j<6;j++,i++){
            s1[j]=s[i];
            }
            printf("%s",s1);
        }
}
