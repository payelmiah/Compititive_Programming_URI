#include<iostream>
using namespace std;
int main()
{
    int n,m,x,y,i,k;
    while(1)
    {
        cin>>k;
        if(k==0) break;
        cin>>n>>m;
        for(i=0;i<k;i++)
        {
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa"<<endl;
            else if(x>n&&y>m) cout<<"NE"<<endl;
            else if(x>n&&y<m) cout<<"SE"<<endl;
            else if(x<n&&y>m) cout<<"NO"<<endl;
            else if(x<n&&y<m) cout<<"SO"<<endl;
        }

    }
    return 0;
}
