#include<bits/stdc++.h>
using namespace std;

char palavra[1000000];

int maior(int ind,int aux)
{
    if(ind == strlen(palavra)) return 0;

    int conta=0;
    int naoConta=0;

    if(aux<=palavra[ind] || ind==0 ) conta = 1+maior(ind+1,palavra[ind]);
    naoConta= maior(ind+1,aux);

    return max(conta,naoConta);
}

int main()
{
    cin>> palavra;
    cout<< maior(0,-1);

    return 0;
}
