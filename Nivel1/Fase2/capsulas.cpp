#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,f,v[100005],resp=10000000000;

ll t=0;

ll bb(int ini,int fim)
{
    if(ini>fim) return resp;
    ll meio = (ini+fim)/2;
    ll caso=0;
    for(int i=0;i<n;i++)
    {
        caso += (meio-(meio%v[i])) / v[i];
    }

    // mostrar valores

//    cout<< "ini: "<<ini<<"\nfim: "<<fim<<"\nmeio: "<<meio<< "\ncaso: "<< caso<< "\n\n";




    if(caso>=f)
    {
        resp=meio;
        return bb(ini,meio-1);
    }
    return bb(meio+1,fim);



}


int main()
{
    cin>> n>>f;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<< bb(1,100000000);


    return 0;
}
