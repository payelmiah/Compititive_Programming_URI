#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,dm1,dm2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        if(h1==0)
        {
            dm1=h2*60-24*60+m2-m1;
            if(dm1>0)
            {
                cout<<dm1<<endl;
            }
            else
            {
                cout<<24*60+dm1<<endl;
            }
        }
        else if(h2==0)
        {
            dm1=24*60-h1*60+m2-m1;
            if(dm1>0)
            {
                cout<<dm1<<endl;
            }
            else
            {
                cout<<24*60+dm1<<endl;
            }
        }
        else if(h1==0&&h2==0)
        {
            dm1=m2-m1;
            if(dm1>0)
            {
                cout<<dm1<<endl;
            }
            else
            {
                cout<<24*60+dm1<<endl;
            }
        }
        else
        {
            dm1=h2*60-h1*60+m2-m1;
            if(dm1>0)
            {
                cout<<dm1<<endl;
            }
            else
            {
                cout<<24*60+dm1<<endl;
            }
        }

    }

    return 0;
}
