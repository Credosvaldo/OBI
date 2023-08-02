#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L,C,A,B;
    cin>>L>>C>>A>>B;
    int N[L+2][C+2];

    for(int i=0;i<L+2;i++)
        for(int j=0;j<C+2;j++)
            N[i][j]=0;

    for(int i=1;i<=L;i++)
        for(int j=1;j<=C;j++)
        {
            cin>> N[i][j];
        }

    while(true)
    {
        if(N[A-1][B] == 1)
        {
            N[A][B]=0;
            A--;
        }
        else if(N[A+1][B] == 1)
        {
            N[A][B]=0;
            A++;
        }
        else if(N[A][B-1] == 1)
        {
            N[A][B]=0;
            B--;
        }
        else if(N[A][B+1] == 1)
        {
            N[A][B]=0;
            B++;
        }
        else
        {
            break;
        }

    }

    cout<< A<<" "<<B;

    return 0;
}
