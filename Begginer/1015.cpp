
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  x1,y1,x2,y2,res;
    cin>>x1>>y1;
    cin>>x2>>y2;
    res=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<setprecision(4)<<fixed<<res<<endl;
}
