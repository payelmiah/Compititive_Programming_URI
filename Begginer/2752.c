#include<stdio.h>
int main()
{
    char n[]="AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",n);
    printf("<%30s>\n",n);
    printf("<%.20s>\n",n);
    printf("<%-20s>\n",n);
    printf("<%-30s>\n",n);
    printf("<%.30s>\n",n);
    printf("<%30.20s>\n",n);
    printf("<%-30.20s>\n",n);
    return 0;
}

