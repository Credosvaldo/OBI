#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    bool A=0,B=0;
    cin>>N;
    int S[N];
    for (int i =0; i<N; i++)
    {
        cin>> S[i];
    }

    for (int i =0; i<N; i++)
    {
        if(S[i]==1)
        {
            if(A==0)
            {
                A=1;
            }
            else
            {
                A=0;
            }
        }
        else
        {
            if(A==0)
            {
                A=1;
            }
            else
            {
                A=0;
            }

            if(B==0)
            {
                B=1;
            }
            else
            {
                B=0;
            }
        }
    }

    cout<< A <<endl <<B;


    return 0;
}
