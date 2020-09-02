#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    double g1,g2;
    cin>>t;
    while(t--)
    {
        int countt=0;
        cin>>a>>b>>g1>>g2;
        while(a<=b)
        {
            a=a+a*g1/100.0;
            b=b+b*g2/100.0;
            countt++;
            if(countt>100)
            {
                break;
            }
        }
        if(countt>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<<countt<<" "<<"anos."<<endl;
        }
    }
    return 0;
}
