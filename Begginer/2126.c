#include<stdio.h>
#include<string.h>
int main()
{
    int l,l1,i,j,k=1;
   signed char s[100],s1[100];
    while(scanf("%s%s",s1,s)!=EOF)
    {
    int count=0,flag=0,c=0,t=0;
       l1=strlen(s1);
       l=strlen(s);
       for(i=0,j=0;s[i]!='\0';i++)
       {
           if(s[i]==s1[j])
           {
               ++c;
              //s3[t]=s[i];
               if(c==l1)//&&!strcmp(s1,s3))
               {
                   c=0;
                   j=0;
                   t=0;
                   flag=1;
                   count++;

               }
               else
               {
                   j++;
               }

           }
           else{

                c=0;
                j=0;
                i--;
           }
       }
       if(flag==1)
       {
           printf("Caso #%d:\n",k++);
           printf("Qtd.Subsequencias: %d\n",count);
           printf("Pos: %d\n",(l-l1)+2);
       }
       else
       {
           printf("Caso #%d:\n",k++);
           printf("Nao existe subsequencia\n");
       }
    }
    return 0;
}
