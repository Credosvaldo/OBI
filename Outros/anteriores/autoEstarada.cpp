#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C,result=0;
    cin>>C;
    char c[C];
    for (int i=0;i<C;i++)
    {
        cin>>c[i];
    }
    for (int i=0;i<C;i++)
    {
        if(c[i]=='P' || c[i]=='C')
        {
            result=result+2;
        }
        else if(c[i]=='A')
        {
            result++;
        }


    }

cout<< result;
    return 0;
}




