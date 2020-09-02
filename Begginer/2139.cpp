#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,d;
    while(cin>>m>>d)
    {
        int sum=0,a[]= {31,29,31,30,31,30,31,31,30,31,30,25};

        if(m==12 && d==25)
            cout<<"E natal!"<<endl;
        else if(m==12 && d==24)
            cout<<"E vespera de natal!"<<endl;
        else if(m==12 && d>25)
            cout<<"Ja passou!"<<endl;
        else
        {
            m--;
            a[m]=a[m]-d;
            for(i=m; i<12;i++)
            {
                sum=sum+a[i];

            }
            cout<<"Faltam"<<" "<<sum<<" "<<"dias para o natal!"<<endl;
        }

    }
    return 0;
}
