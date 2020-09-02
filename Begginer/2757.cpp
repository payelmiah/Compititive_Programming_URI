#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,r,count=0,i,n,f,m;
    while(cin>>a>>b>>c){
    cout<<"A = "<<a<<", B = "<<b<<", C = "<<c<<endl;
    cout<<"A =       "<<a<<", B =         "<<b<<", C =        "<<c<<endl;
    m=a;
    for(i=1;i<=3;i++)
    {
        f=0;
        if(i==1)
        {
            cout<<"A = ";
            n=a;
            if(n<0)
            {
                f=1;
            }
        }
        else if(i==2)
        {
            cout<<" B = ";
            n=b;
        }
        else{
                cout<<" C = ";
            n=c;
        }
        while(n!=0)
        {
            r=n%10;
            count++;
            n=n/10;

        }
        for(int j=0;j<10-count;j++)
        {
            if(count==0)
            {
               count=1;
            }
            if(f==1)
            {
                cout<<"-";
                f=0;
            }
            cout<<"0";
        }
        if(i==1)
        {
            if(a<0)
            {
                a=(-1*a);
            }
            cout<<a;
        }
        else if(i==2)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
        count=0;
    }
    cout<<endl;
    cout<<"A = "<<m<<"      , B = "<<b<<"        , C = "<<c<<endl;
    }
    return 0;

}
