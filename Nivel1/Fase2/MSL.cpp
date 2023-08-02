#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "cjakl\n";
    int l,c;
    cin>>l>>c;
    int a[1005][1005];
    cout<<"leu\n";

    for(int i=0;i<l;i++)
    for(int j=0;j<c;j++)
    cin>>a[i][j];

    int resp=0;

    for(int i=0;i<l-1;i++)
        for(int j=0;j<c-1;j++)
            for(int q=2;q<l;q++)
                for(int r=2;r<c;r++)
                    if( a[i][j]+a[q][r]<=a[i][r]+a[q][j] )
                        resp = max(resp,(i-q)*(j-r));



    cout<< resp;



    return 0;
}
