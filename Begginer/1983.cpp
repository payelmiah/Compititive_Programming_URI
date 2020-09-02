#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,t,p;
    cin>>t;
    int a[t];
    double b[t];
    for(i=0; i<t; i++)
    {
        cin>>a[i]>>b[i];
    }
    double maxi=b[0];
    for(i=0; i<t; i++)
    {
        if(maxi<b[i])
        {
            maxi=b[i];
            p=i;
        }
    }
    if(maxi>=8.0)
    {
        cout<<a[p]<<endl;
    }
    else
    {
        cout<<"Minimum note not reached"<<endl;
    }
    return 0;
}
