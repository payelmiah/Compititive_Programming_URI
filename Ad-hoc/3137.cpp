#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,r,i,m;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        m=i;
        while(m!=0)
        {
            m=m/10;
            count++;
        }
    }
    cout<<count<<endl;
}
