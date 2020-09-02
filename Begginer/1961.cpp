#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,i,n1,countt=0;
    cin>>p>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            if((a[i]+p)>=(a[i+1]))
            {
                countt++;
            }

        }
        else
        {
            if((a[i]-a[i+1])<=p)
            {
                countt++;
            }

        }
    }
    if(countt==n-1)
    {
        cout<<"YOU WIN"<<endl;
    }
    else
    {
        cout<<"GAME OVER"<<endl;
    }
    return 0;
}
