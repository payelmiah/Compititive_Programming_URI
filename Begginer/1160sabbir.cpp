#include <bits/stdc++.h>
using namespace std;
int population(int pa,int pb,double g1,double g2)
{
    int countt=0;
    while(pa <= pb)
    {
        pb=pb+pb*g2/100.0;
        pa=pa+pa*g1/100.0;
        countt++;
        if(countt>100)
        {
            break;
        }
    }
    return countt++;
}
int main()
{
  long long  int t,sa,ra,d=0;
    double hu,mar;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>sa>>ra>>hu>>mar;
         d=population(sa,ra,hu,mar);
        if(d>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<<d<<" "<<"anos."<<endl;
        }
    }
    return 0;
}
