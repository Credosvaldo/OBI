#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, r=0, q=0, r2=0;
    cin>> N;
    int v[N];

    cin >> v[0];
    q=v[0];

    for(int i=1;i<N;i++)
    {
        cin>> v[i];
        if(v[i] > v[q])
            q=1;
    }

    for(int i =0; i<N;i++)
    {
        if(abs(i-q) > r2)
            r=v[q]+v[i]+abs(q-i);

    }

    cout <<r;

    return 0;
}
