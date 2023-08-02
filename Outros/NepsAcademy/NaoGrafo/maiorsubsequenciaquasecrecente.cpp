#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[n];

    vector<int>pilha;

    for(int i=1;i<n;i++)
    {
        vector<int>::iterator it = upper_bound(pilha.begin(),pilha.end(),v[i]);

        if(it==pilha.end())
        {
            pilha.push_back(v[i]);
        }
        else
        {
            *it=v[i];
        }



    }

    cout<< pilha.size();


    return 0;
}
