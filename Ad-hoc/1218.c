#include<stdio.h>
int main()
{
    int a,n,i=0;
    char ch;
    while(scanf("%d",&n)!=EOF)
    {
        int count=0,count1=0,count2=0;
        while(scanf("%d %c",&a,&ch)!=EOF)
        {
            if(n==a)
            {
                count++;
                if(ch=='F') count1++;
                else count2++;
            }
            if(ch=='\n') break;
        }
        i++;
        printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",i,count,count1,count2);
        printf("\n");
    }
    return 0;
}
