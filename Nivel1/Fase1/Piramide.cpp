#include<bits/stdc++.h>
using namespace std;

int m[101][101];
int aux[101][101];

int piramide(int L,int C)
{
    if(L==0)
    {
        return m[L][C];
    }

    if(aux[L][C]>0)
    {
        return aux[L][C];
    }

    for(int i=0;i<=L;i++)
    {
        aux[L][C]+=m[L][C+i];
    }


    return aux[L][C] += min(piramide(L-1,C),piramide(L-1,C+1));


}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
            aux[i][j]=0;
        }
    }

    cout << piramide(n-1,0);


    return 0;
}
