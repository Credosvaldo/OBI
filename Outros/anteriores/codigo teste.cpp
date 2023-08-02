#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>> N;
    int v[N];
    int aux=0;
    for (int i=0;i<N;i++)
    {
        cin >> v[i];
    }

for (int i=0;i<N;i++)
{
    if(v[i]==1)
        if(v[i+1]==0)
            if(v[i+2]==0)
                aux++;
}

cout<<aux;

    return 0;
}
