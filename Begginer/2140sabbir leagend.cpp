#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,sub,i,a[]={2,5,10,20,50,100};
    while(cin>>n>>m)
    {
        int sum=0,c=0;
        sub=m-n;
        if(n==0&&m==0)
        {
            break;
        }
        for(i=1,k=0;i<6;)
        {
            sum+=a[k]+a[i];
            if(sum==sub)
            {
                c=1;
                break;
            }
            else
            {
                sum=0;
            }
            if(i==5)
            {
                ++k;
                i=k+1;
                continue;

            }
            i++;

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
