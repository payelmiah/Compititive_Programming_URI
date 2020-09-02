#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,m;


    cin>>n;
    while(n--)
    {
        cin>>m;
        cout<<(long long)(pow(2,m)/12000)<<" kg"<<endl;
    }
    return 0;

}
