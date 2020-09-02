#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n=sizeof(s)/sizeof(s[0]);
    cout<<"---------------------------------------"<<endl;
    cout<<"| decimal   |  octal  |  Hexadecimal  |"<<endl;
    cout<<"---------------------------------------"<<endl;
    for(int i=0,j=0;i<n;i++,j++)
    {

        if(j==8||j==11)
        {
            if(j==8) j=10;

            cout<<"|      "<<i<<"    |   "<<j<<"    |       "<<s[i]<<"       |"<<endl;
        }
        else if(i>=10)
        {
            cout<<"|     "<<i<<"    |   "<<j<<"    |       "<<s[i]<<"       |"<<endl;
            continue;
        }
        else
        {
            cout<<"|      "<<i<<"    |    "<<j<<"    |       "<<s[i]<<"       |"<<endl;
        }

    }
    cout<<"---------------------------------------"<<endl;
}
