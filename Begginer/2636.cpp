#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0,j=0,t,a[100];
    cin>>t;
    for(i=3;i<t;i+=2)
    {
        if(t%i==0)
        {
            count++;
             a[j++]=i;
        }
    }
    for(j=0;j<count;j++)
    {
        cout<<a[j]<<" x ";
    }
}
