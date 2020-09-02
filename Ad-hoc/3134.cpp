
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[4],max,m=0.0;
    int i,n=0;
    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1; i<4; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            n=i;
        }
    }
    for(i=0; i<4; i++)
    {
        if(i==n)
        {
            continue;
        }
        m+=a[i];
    }
    if(max==m)
    {
        cout<<"YES"<<endl;
    }
    else if(a[0]+a[1]==a[2]+a[3])
    {
        cout<<"YES"<<endl;
    }
    else if(a[0]+a[3]==a[1]+a[2])
    {
        cout<<"YES"<<endl;
    }
    else if(a[0]+a[2]==a[1]+a[3])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

