#include<bits/stdc++.h>
using namespace std;
long long int n,m,countt=0,i,a[10000],j;
void Josephus(int countt)
{
    if(countt!=0)
        {

            for(i=0; i<n; i++)
            {

                if(a[i]!=0)
                {
                    countt++;

                    if(countt==m)
                    {
                        a[i]=0;
                        countt=0;
                    }
                }
            }
        }
        else
        {

            for(i=0; i<n; i++)
            {
                if(a[i]!=0)
                {
                    countt++;
                    if(countt==m)
                    {
                        a[i]=0;
                        countt=0;
                    }
                }
            }

        }
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                c++;
            }
        }
        if(c==1)
        {
            return;
        }
        else{
            Josephus(countt);
        }

}
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0,j=1; i<n; i++,j++)
        {
            countt++;
            if(countt==m)
            {
                a[i]=0;
                countt=0;
            }
            else
            {
                a[i]=j;
            }
        }
        Josephus(countt);
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                cout<<"Case"<<" "<<k++<<":"<<" "<<a[i]<<endl;
                countt=0;
            }
        }


    }
return 0;

}
