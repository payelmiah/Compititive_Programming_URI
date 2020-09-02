#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,o,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&h,&m,&o);
        if(o==1)
        {
            if(h<10 && m>=10)
            {
                cout<<"0"<<h<<":"<<m<<" - A porta abriu!"<<endl;
            }
            else if(h<10&&m<10)
            {
                cout<<"0"<<h<<":"<<"0"<<m<<" - A porta abriu!"<<endl;
            }
            else if(h>=10 && m>=10)
            {
                cout<<h<<":"<<m<<" - A porta abriu!"<<endl;
            }
            else if(h>=10&&m<10)
            {
                cout<<h<<":"<<m<<"0"<<" - A porta abriu!"<<endl;
            }
        }
        else
        {
            if(h<10 && m>=10)
            {
                cout<<"0"<<h<<":"<<m<<" - A porta fechou!"<<endl;
            }
            else if(h<10&&m<10)
            {
                cout<<"0"<<h<<":"<<"0"<<m<<" - A porta fechou!"<<endl;
            }
            else if(h>=10 && m>=10)
            {
                cout<<h<<":"<<m<<" - A porta fechou!"<<endl;
            }
            else if(h>=10&&m<10)
            {
                cout<<h<<":"<<m<<"0"<<" - A porta fechou!"<<endl;
            }
        }
    }
    return 0;
}
