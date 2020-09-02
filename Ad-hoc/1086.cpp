#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,w,s,k;
    while(cin>>x>>y)
    {
        int count=0,countt=0,c=0,c1=0;
        if(x==0&&y==0) break;
        cin>>w;
        w=w/100;
        cin>>s;
        int a[s];
        for(i=0;i<s;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<s;i++)
        {
            if(a[i]==x)
            {
                count++;
                c++;
            }
            if(a[i]==y)
            {
                countt++;
                c1++;
            }
        }
        for(i=s-2,k=s-1;i>=0;i--)
        {
            if(a[k]+a[i]==x)
            {
              count+=2;
              k--;
              a[i]=0;
              c++;
            }
            if(i==0)
            {
                k--;
                i=k-1;
            }

        }
        for(i=s-2,k=s-1;i>=0;i--)
        {
            if(a[k]+a[i]==y)
            {
              countt+=2;
              k--;
              a[i]=0;
              c1++;
            }
            if(i==0)
            {
                k--;
                i=k-1;
            }

        }



                    cout<<count<<endl;

                    cout<<countt<<endl;


    }

}

