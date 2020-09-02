#include<iostream>
using namespace std;
int main()
{
    int n,t;
    double vote,count=0,countt=0;
    while(cin>>t)
    {

        while(t--)
        {
            countt++;
            cin>>n;
            if(n==1)
            {
                count++;
            }
        }
        vote=count/countt;
        if(vote>=2.0/3.0)
        {
            cout<<"impeachment"<<endl;
        }
        else
        {
            cout<<"acusacao arquivada"<<endl;
        }
        count=0;
        countt=0;
    }
    return 0;

}
