#include<stdio.h>
int main()
{
    int a,b,t,s=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        s=a+b;
        if(s==0) printf("PROXYCITY\n");
        else if(s==1) printf("P.Y.N.G.\n");
        else if(s==2) printf("DNSUEY!\n");
        else if(s==3) printf("SERVERS\n");
        else if(s==4) printf("HOST!\n");
        else if(s==5) printf("CRIPTONIZE\n");
        else if(s==6) printf("OFFLINE DAY\n");
        else if(s==7) printf("SALT\n");
        else if(s==8) printf("ANSWER!\n");
        else if(s==9) printf("RAR?\n");
        else if(s==10) printf("WIFI ANTENNAS\n");

    }
    return 0;
}
