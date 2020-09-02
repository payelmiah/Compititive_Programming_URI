#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count=0,r,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        r=i;
        while(r!=0)
        {
            r=r/10;
            count++;
        }
    }
    cout<<count<<endl;
}
