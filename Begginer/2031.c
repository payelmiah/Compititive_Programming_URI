#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[10],s1[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s%s",s,s1);
        if(!strcmp(s,"ataque"))
        {
             if(!strcmp(s1,"papel"))
             {
                 printf("Jogador 1 venceu\n");
             }
             else if(!strcmp(s1,"ataque"))
             {
                 printf("Aniquilacao mutua\n");
             }
             else if(!strcmp(s1,"pedra"))
             {
                 printf("Jogador 1 venceu\n");
             }
        }
       else if(!strcmp(s,"pedra"))
        {
             if(!strcmp(s1,"papel"))
             {
                 printf("Jogador 1 venceu\n");
             }
             else if(!strcmp(s1,"ataque"))
             {
                 printf("Jogador 2 venceu\n");
             }
             else if(!strcmp(s1,"pedra"))
             {
                 printf("Sem ganhador\n");
             }
        }
        else if(!strcmp(s,"papel"))
        {
            if(!strcmp(s1,"ataque"))
            {
                printf("Jogador 2 venceu\n");
            }
            else if(!strcmp(s1,"pedra"))
            {
                 printf("Jogador 2 venceu\n");
            }
            else if(!strcmp(s1,"papel"))
            {
                printf("Ambos venceram\n");
            }
        }

    }
    return 0;
}
