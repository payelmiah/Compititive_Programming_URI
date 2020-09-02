#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    int a,i;
    while(scanf("%d",&a))
    {
        int c=0;

        if(a==0)
        {
            break;
        }
        int count=0;
        for(i=0; i<a; i++)
        {

            scanf("%s%s",s1,s);
            count++;
            if(count==1)
            {
            if((!strcmp(s,"quadrado")||!strcmp(s,"quadrados")&&(!strcmp(s,"triangulo")||(!strcmp(s,"triangulos")))))
            {

                c;
            }
            }
            else{
                c++;
            }


        }
        if(c==0)
        {
            printf("%d\n",a/3);
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;

}
