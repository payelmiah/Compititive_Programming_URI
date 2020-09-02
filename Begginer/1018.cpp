#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,ten,fit,twt,hun,tw,one,fiv;
    cin>>m;
    n=m;
    hun=n/100;
    n=n%100;
    fit=n/50;
    n=n%50;
    twt=n/20;
    n=n%20;
    ten=n/10;
    n=n%10;
    fiv=n/5;
    n=n%5;
    tw=n/2;
    n=n%2;
    one=n;
    cout<<m<<endl;
    cout<<hun<<" nota(s) de R$ 100,00"<<endl;
    cout<<fit<<" nota(s) de R$ 50,00"<<endl;
    cout<<twt<<" nota(s) de R$ 20,00"<<endl;
    cout<<ten<<" nota(s) de R$ 10,00"<<endl;
    cout<<fiv<<" nota(s) de R$ 5,00"<<endl;
    cout<<tw<<" nota(s) de R$ 2,00"<<endl;
    cout<<one<<" nota(s) de R$ 1,00"<<endl;

}

