#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int M;

    cin>>N;
    cin>>M;



    int V[N];
    int B[M];



    for (int i=0;i<N;i++)
        cin>> V[i];
    for (int i=0;i<M;i++)
        cin>> B[i];









    for (int i=0;i<M;i++)
        for (int j=0;j<N;j++)
        {
            if (B[i]==V[j])
                V[j]=0;
        }



    for (int i=0;i<N;i++)
    {
        if (V[i]!=0)
            cout<< V[i];
    }




    return 0;
}
