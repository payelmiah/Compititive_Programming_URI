#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sub,i,a[]={2,5,10,20,50,100};
    while(cin>>n>>m)
    {
        int sum=0,c=0;
        sub=m-n;
        if(n==0&&m==0)
        {
            break;
        }
        for(i=0;i<6;i++)
        {
            sum+=a[0]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }
        }
        for(i=2;i<6;i++)
        {
            sum+=a[1]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }

        }
        for(i=3;i<6;i++)
        {
            sum+=a[2]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }
        }
        for(i=4;i<6;i++)
        {
            sum+=a[3]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }
        }
        for(i=5;i<6;i++)
        {
            sum+=a[4]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }
        }
        for(i=5;i<6;i++)
        {
            sum+=a[4]+a[i];
            if(sum==sub)
            {
                c=1;
            }
            else
            {
                sum=0;
            }
        }
        if(c==1)
        {
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }

    }
    return 0;
}
