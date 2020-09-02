#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,m,n,k=1;
   char s1[1000],s2[1000];
    while(scanf("%s%s",s1,s2)!=EOF)
    {
        int count=0,countt=0,h=0,hub=0,c=0,hu=0;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0,j=0;i<l2;)
        {
            if(s1[j]==s2[i])
            {
                count++;

                if(l1==count)
                {
                    c=1;
                    countt++;
                    j=0;
                    count=0;
                    i++;
                    continue;
                }
                j++;
                i++;

            }
            else
                {
                       i=i-(j-1);
                        count=0;
                         j=0;
                         hu++;
                        continue;

            }
        }
        if(c==1)
        {

            printf("Caso #%d:\n",k);
            printf("Qtd.Subsequencias: %d\n",countt);
            printf("Pos: %d\n",hub);
        }
        else
        {
            printf("Caso #%d:\n",k);
            printf("ao existe subsequencia\n");
        }
        printf("\n");
        k++;

    }
    return 0;

}
