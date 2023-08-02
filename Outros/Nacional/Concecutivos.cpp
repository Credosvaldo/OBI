#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
        cin>>v[i];

    int resp=0;
    int maior=0;
    int aux=v[0];

    for(int i=1;i<n;i++)
    {
        if(v[i]==aux)
        {
            resp++;
        }
        else
        {
            aux=v[i];
            resp=0;
        }
        maior=max(maior,resp);


    }

    cout<< maior+1;

    return 0;
}
