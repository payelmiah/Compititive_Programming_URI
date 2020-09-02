#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,j1,j2,r,a,sum;
    cin>>p>>j1>>j2>>r>>a;
    sum=j1+j2;
    if(p==1)  //Player 1
    {
        if(sum%2==0)
        {
           if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }
        else
        {
            if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==0)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
        }
    }
    else //player 1 chose odd
    {
        if(sum%2!=0)//odd
        {
            if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }
        else
        {

            if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0&&a==0)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }

        }
    }

    return 0;

}
