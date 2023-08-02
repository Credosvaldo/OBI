#include<bits/stdc++.h>
#include<queue>
using namespace std;


int main()
{
    long long int n;
    cin>>n;

    queue<double>fila;

    char filaOP[n];

    double resp=1;

    for(long long int i=0;i<n;i++)
    {
        int aux;
        cin>>aux;
        fila.push(aux);
        cin>>filaOP[i];
    }

    long long int i=0;
    while(!fila.empty())
    {
        if(filaOP[i] == '*')
        {
            resp*=fila.front();
        }
        else
        {
            resp/=fila.front();
        }
        i++;
        fila.pop();

    }

    cout<<fixed<<setprecision(0)<<resp;


    return 0;
}
