#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[100];
    while(scanf("%d",&n))
    {
        while(n--)
        {
            scanf(" %[^\n]",s);
            if(!strcmp(s,".")) printf("a\n");
            else if(!strcmp(s,"..")) printf("b\n");
            else if(!strcmp(s,"...")) printf("c\n");
            else if(!strcmp(s,". .")) printf("d\n");
            else if(!strcmp(s,".. ..")) printf("e\n");
            else if(!strcmp(s,".. .. ..")) printf("f\n");
            else if(!strcmp(s,". . .")) printf("g\n");
            else if(!strcmp(s,".. .. ..")) printf("h\n");
            else if(!strcmp(s,"... ... ...")) printf("i\n");
            else if(!strcmp(s,". . . .")) printf("j\n");
            else if(!strcmp(s,".. .. .. ..")) printf("k\n");
            else if(!strcmp(s,"... ... ... ...")) printf("l\n");
            else if(!strcmp(s,". . . . .")) printf("m\n");
            else if(!strcmp(s,".. .. .. .. ..")) printf("n\n");
            else if(!strcmp(s,"... ... ... ... ...")) printf("o\n");
            else if(!strcmp(s,". . . . . .")) printf("p\n");
            else if(!strcmp(s,".. .. .. .. .. ..")) printf("q\n");
            else if(!strcmp(s,"... ... ... ... ... ...")) printf("r\n");
            else if(!strcmp(s,". . . . . . .")) printf("s\n");
            else if(!strcmp(s,".. .. .. .. .. .. ..")) printf("t\n");
            else if(!strcmp(s,"... ... ... ... ... ... ...")) printf("u\n");
            else if(!strcmp(s,". . . . . . . .")) printf("v\n");
            else if(!strcmp(s,".. .. .. .. .. .. .. ..")) printf("w\n");
            else if(!strcmp(s,"... ... ... ... ... ... ... ...")) printf("x\n");
            else if(!strcmp(s,". . . . . . . . .")) printf("y\n");
            else if(!strcmp(s,".. .. .. .. .. .. .. .. ..")) printf("z\n");

        }
    }
    return 0;
}
