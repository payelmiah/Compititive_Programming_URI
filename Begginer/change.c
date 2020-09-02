#include<stdio.h>
int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        if(0<=m&&m<90) printf("Bom Dia!!\n");
        else if(90<=m&&m<180) printf("Boa Tarde!!\n");
        else if(180<=m&&m<270) printf("Boa Noite!!\n");
        else if(270<=m&&m<360) printf("De Madrugada!!\n");
        else if(360<=m||m<90) printf("Bom Dia!!\n");

    }
    return 0;
}
