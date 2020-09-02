#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int i,j,countt=0,c=0,t,sum=0;
    cin>>t;
    long long int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        countt++;
        if(a[i]==0)
        {
            break;
        }
        else if(a[i]%2==0)
        {
            a[i]=a[i]-1;
            c++;
            for(j=countt-2;j>=0;j--)
            {
                if(a[j]==0) break;

               else a[j]=a[j]-1;
            }
            break;
        }
        else
        {
            a[i]=a[i]-1;
            c++;
        }

    }
    for(i=0;i<t;i++)
    {
        sum+=a[i];
    }
    cout<<c<<" "<<sum<<endl;
    return 0;
}
