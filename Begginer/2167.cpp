#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,flag=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0,j=1; i<n; i++,j++)
    {
        if(a[i]>a[i+1])
        {
            c=j;
            flag=1;
            c++;
            break;
        }


    }
    if(flag==1)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    //main();
    return 0;
}
