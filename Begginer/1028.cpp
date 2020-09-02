#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,t,i;
    cin>>t;
    while(t--)
    {
        int h=0;
        cin>>a>>b;
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        else
        {
            for(i=a;; i--)
            {
                if(a%i==0 && b%i==0)
                {
                    h=i;
                    break;
                }

            }
        }
        cout<<h<<endl;

    }
}
