#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m,m1,n;
    cin>>a>>b>>c;
    m=(a+b+abs(a-b))/2;
    m1=(m+c+abs(m-c))/2;
    n=max(m1,m);
    cout<<n<<" eh o maior"<<endl;

}
