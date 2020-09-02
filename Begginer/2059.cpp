#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j1,j2,r,a,sum,p;
    scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
    sum=p+j1+j2+r+a;
    if(p==1)
    {
        if(sum%2==0)
        {
            if(a==1 && r==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }

        }
        else
        {
            if(a==1 && r==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }

    }
    else
    {
        if(sum%2!=0 )
        {

            if(a==1 && r==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }

        }
        else{
            if(a==1 && r==1)
            {
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==0&&a==1)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1&&a==0)
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else
            {
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }
    }
    main();
    return 0;
}
