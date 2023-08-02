#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string nome[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>nome[i];
    }
    sort(nome+1,nome+n+1);


    cout<< nome[k];

    return 0;
}
