#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,l;
    while(cin>>t)
    {
        int a[t],arr[t],count=0,k,p;
        for(i=0;i<t;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<t;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<t;i++)
        {
            if(a[i]==arr[i])
            {
                count=0;
            }
            else if(a[i]>arr[i])
            {
                for(j=0,k=i;j<t;)
                {
                    if(a[k]==arr[j])
                    {
                        p=j;
                        break;
                    }
                    else
                    {
                        j++;
                    }
                }
                while(k!=p)
                {
                    if(k<p){
                    int b=arr[p];
                    arr[p]=arr[p-1];
                    arr[p-1]=b;
                    count++;
                    p--;
                    }
                    else
                    {
                        int b=arr[p];
                    arr[p]=arr[p+1];
                    arr[p+1]=b;
                    count++;
                    p++;
                    }
                }

            }
            else
            {
                for(j=0,k=i;j<t;)
                {
                    if(a[k]==arr[j])
                    {
                        p=j;
                        break;
                    }
                    else
                    {
                        j++;
                    }
                }
                while(k!=p)
                {
                    if(k<p){
                    int b=arr[p];
                    arr[p]=a[p-1];
                    arr[p-1]=b;
                    count++;
                    j--;
                    }
                    else
                    {
                        int b=arr[p];
                    arr[p]=a[p+1];
                    arr[p+1]=b;
                    count++;
                    p++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}
