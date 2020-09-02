#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,i,j,count=0;
    double r1,r2;
    cin>>j;
    while(j--)
    {
        cin>>a>>b>>r1>>r2;
        do{
                a+=r1;
        count++;

        }while(a>=b);

        cout<<count;
    }

}
