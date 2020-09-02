#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,p,j;
    while(cin>>n>>m)
    {
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<m; i++)
        {
            cin>>p;
            p=n-p;
            p=p+1;
            cout<<a[p-1]<<endl;
        }
    }


}
