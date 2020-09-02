#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k=1,countt=0,l=2;

    while(!cin.eof())
    {
        cin>>t;

       if(t==0)
       {
           cout<<"Caso 1: 1 numero"<<endl;
           cout<<"0"<<endl<<endl;


       }
       else if(t==1)
       {
           cout<<"Caso 2: 2 numero"<<endl;
           cout<<"0"<<" "<<"1"<<endl<<endl;
       }

       else
       {
           l=l+t;
           cout<<"Caso"<<" "<<k<<":"<<" "<<l<<" "<<"numero"<<endl;
           cout<<"0"<<" "<<"1"<<" ";
           for(i=2;i<=t;i++)
           {

               for(j=0;j<i;j++)
               {
                   cout<<i<<" ";
               }

           }

           cout<<endl<<endl;
       }
       k++;
    }
    return 0;
}
