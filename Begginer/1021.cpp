#include<bits/stdc++.h>
using namespace std;
int main()
{
   long double m;
    int h,fit,tw,ten,fiv,t,o,f5,f2,f1,f05,n;
    cin>>m;
    n=m*100;
    h=n/10000;
    n=n%10000;
    fit=n/5000;
    n=n%5000;
    tw=n/2000;
    n=n%2000;
    ten=n/1000;
    n=n%1000;
    fiv=n/500;
    n=n%500;
    t=n/200;
    n=n%200;
    o=n/100;
    n=n%100;
    f5=n/50;
    n=n%50;
    f2=n/25;
    n=n%25;
    f1=n/10;
    n=n%10;
    f05=n/5;
    n=n%5;
    cout<<"NOTAS:"<<endl;
    cout<<h<<" nota(s) de R$ 100.00"<<endl;
    cout<<fit<<" nota(s) de R$ 50.00"<<endl;
    cout<<tw<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<fiv<<" nota(s) de R$ 5.00"<<endl;
    cout<<t<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;

    cout<<o<<" moeda(s) de R$ 1.00"<<endl;
    cout<<f5<<" moeda(s) de R$ 0.50"<<endl;
    cout<<f2<<" moeda(s) de R$ 0.25"<<endl;
    cout<<f1<<" moeda(s) de R$ 0.10"<<endl;
    cout<<f05<<" moeda(s) de R$ 0.05"<<endl;
    cout<<n<<" moeda(s) de R$ 0.01"<<endl;

}
