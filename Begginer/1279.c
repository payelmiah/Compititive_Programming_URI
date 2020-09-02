#include<stdio.h>
int main()
{
   long long int n;
    while(scanf("%lld",&n)!=EOF&&n>=2000)
    {

       if(n%4==0 && n%100!=0 || n%400==0)
       {
           if(n%15==0)
           {
               printf("This is leap year.\n");
               printf("This is huluculu festival year.\n");
               continue;
           }
           else if(n%55==0)
           {
               printf("This is leap year.\n");
               printf("This is Bulukulu festival year.\n");
               continue;
           }
           else{
           printf("This is leap year.\n");
           }
       }
      else if(n%15==0)
       {
           printf("This is huluculu festival year.\n");
       }
       else if(n%55==0)
       {
           printf("This is Bulukulu festival year.\n");

       }
       else
       {
           printf("This is an ordinary year.\n");
       }
    }

    return 0;
}

