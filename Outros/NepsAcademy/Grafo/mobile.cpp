#include<bits/stdc++.h>
#include<vector>
#define pb push_back
using namespace std;

long long int n;
vector<long long int>mobile[100000];
int dp[100000];
bool s=false;

int mob(int p)
{
    if(mobile[p].empty()) return 1;


    int retorno=mob(mobile[p][0]);


    for(int i=1;i<mobile[p].size();i++)
    {
        if(retorno!=mob(mobile[p][i]))
        {
            s=true;
            return 0;
        }
    }

    retorno=retorno*mobile[p].size();

    retorno++;

    return retorno;



}





int main()
{

    cin>>n;

    memset(dp,0,sizeof(dp));

    for(long long int i=0;i<n;i++)
    {
        long long int aux1,aux2;
        cin>>aux1>>aux2;
        mobile[aux2].pb(aux1);

    }

    mob(0);

    if(s)
    {
        cout<<"mal";
    }
    else
    {
        cout<<"bem";
    }



    return 0;
}



