#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"Valido-Equilatero"<<endl<<"Retangulo: N"<<endl;
    }
    else if(a==b || b==c || a==c)
    {
        if(a+b>c&&b+c>a&&a+c>b)
        {
            cout<<"Valido-Isoceles"<<endl<<"Retangulo: N"<<endl;
        }
        else
    {
        cout<<"Invalido"<<endl;
    }

    }
    else if(a+b>c && b+c>a && a+c>b)
    {
        if(a*a+b*b==c*c)
        {
            cout<<"Valido-Escaleno"<<endl<<"Retangulo: S"<<endl;
        }
        else if(b*b+c*c==a*a)
        {
            cout<<"Valido-Escaleno"<<endl<<"Retangulo: S"<<endl;
        }
        else if(a*a+c*c==b*b)
        {
            cout<<"Valido-Escaleno"<<endl<<"Retangulo: S"<<endl;
        }
        else
        {
            cout<<"Valido-Escaleno"<<endl<<"Retangulo: N"<<endl;
        }
    }
    else
    {
        cout<<"Invalido"<<endl;
    }
    main();
    return 0;
}
