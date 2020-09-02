#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,rec,cir,tra,sqr,tri;
    cin>>a>>b>>c;
    tri=1/2.0*a*c;
    cir=3.14159*c*c;
    tra=1/2.0*(a+b)*c;
    sqr=b*b;
    rec=a*b;
    cout<<"TRIANGULO: "<<setprecision(3)<<fixed<<tri<<endl;
    cout<<"CIRCULO: "<<setprecision(3)<<fixed<<cir<<endl;
    cout<<"TRAPEZIO: "<<setprecision(3)<<fixed<<tra<<endl;
    cout<<"QUADRADO: "<<setprecision(3)<<fixed<<sqr<<endl;
    cout<<"RETANGULO: "<<setprecision(3)<<fixed<<rec<<endl;

}
