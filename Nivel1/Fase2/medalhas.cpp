#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int resp[3];
    resp[0]=a;
    resp[1]=b;
    resp[2]=c;
    sort(resp,resp+3);
    for(int i=0;i<3;i++)
    {
        if(resp[i]==a)
            cout<< 1<< "\n";
        if(resp[i]==b)
            cout<< 2<< "\n";
        if(resp[i]==c)
            cout<< 3<< "\n";

    }



    return 0;
}
