#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100],s1[100],s2[100];
    cin>>s>>s1>>s2;
    if(s[0]=='v')
    {
        if(s1[0]=='a')
        {
            if(s2[0]=='c')
            {
                cout<<"aguia"<<endl;
            }
            else if(s2[0]=='o')
            {
                cout<<"pomba"<<endl;
            }
        }
        else if(s1[0]=='m')
        {
            if(s2[0]=='o')
            {
                cout<<"homem"<<endl;
            }
            else if(s2[0]=='h')
            {
                cout<<"vaca"<<endl;
            }
        }
    }
    else if(s[0]=='i')
    {
        if(s1[0]=='i')
        {
            if(s2[2]=='m')
            {
                cout<<"pulga"<<endl;
            }
            else if(s2[2]=='r')
            {
                cout<<"lagarta"<<endl;
            }

        }
        else if(s1[0]=='a')
        {
            if(s2[0]=='h')
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(s2[0]=='o')
            {
                cout<<"minhoca"<<endl;
            }
        }
    }
    return 0;
}
