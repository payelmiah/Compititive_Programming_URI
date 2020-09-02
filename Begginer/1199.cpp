#include<bits/stdc++.h>
using namespace std;
int hexa(string n)
{
    int sum=0;
    for(int i=2; n[i]!='\0'; i++)
    {

        sum=sum*10+((int)n[i]-48);

    }
    int r=0,d=0,j=0;
    cout<<sum<<endl;
    while(sum!=0)
    {
        r=sum%10;
        d=d+r*pow(16,j++);
        sum=sum/10;

    }
    return d;
}
int main()
{
    string n;
    int f=0,num,r=0,decimal;
    cin>>n;

    if(n[0]=='0'&&(n[1])=='x')
    {
        decimal=hexa(n);
        f=1;
        cout<<decimal<<hex<<endl;
    }
    string hex;
    if(f=0)
    {
        int sum=0,k=0;
        for(int i=2; n[i]!='\0'; i++ )
        {

            sum=sum*10+((int)n[i]-48);

        }
        cout<<sum<<endl;
        while(sum!=0)
        {
            r=sum%16;
            if (r < 10){
                hex[k++] = r + 48;
            }
            else{
                hex[k++] = r + 55;
            sum=sum/16;
            }
        }
        cout<<"0x"<<hex<<endl;
    }

    main();
}
