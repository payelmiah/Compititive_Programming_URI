#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],countt=1,counttt=1,sum=0,b;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n;i++)
        {

           j=i+1;
           while(j--&&a[i]>a[i+1])
           {
               b=a[i];
               a[i]=a[i+1];
               a[i+1]=b;
               i--;
           }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                countt++;
            }
            else
            {
                sum+=countt*countt;
                countt=1;
            }
        }
        cout<<"Case"<<" "<<k<<":"<<" "<<sum<<endl;
        k++;
    }
    return 0;
}

