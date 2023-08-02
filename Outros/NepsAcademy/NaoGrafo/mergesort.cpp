#include<bits/stdc++.h>
#include <vector>
using namespace std;

#define INF -1000000000005


void merge_sort(vector<long double> &v)
{
    if(v.size()==1)
        return;

    vector<long double>u1,u2;

    for(long double i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);
    for(long double i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);

    merge_sort(u1);
    merge_sort(u2);

    u1.push_back(INF);
    u2.push_back(INF);

    long double ini1=0,ini2=0;
    for(long double i=0;i<v.size();i++)
    {
        if(u1[ini1]>u2[ini2])
        {
            v[i]=u1[ini1];
            ini1++;
        }
        else
        {
            v[i]=u2[ini2];
            ini2++;
        }


    }
    return;



}


int main()
{
    long double n;
    vector<long double> V;
    cin>>n;

    for(long double i=0;i<n;i++)
    {
        long double aux;
        cin>>aux;
        V.push_back(aux);
    }


    merge_sort(V);

    cout.precision(0);
    for(long double i=0;i<n;i++)
    {

        cout<<fixed<<V[i]<< " ";
    }


    return 0;
}
