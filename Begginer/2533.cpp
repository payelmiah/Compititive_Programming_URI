#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c;
    float API,sum=0,A,P;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n>>c;
            A+=n*c;
            P+=c;

        }
        P=P*100;
        sum=A/P;
        printf("%.4f\n",sum);
        A=P=sum=0;
    }
    return 0;
}
