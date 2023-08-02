#include<bits/stdc++.h>
using namespace std;

struct pessoas{
int inicio;
int fim;

};

bool Comparar(pessoas a, pessoas b)
{
    return a.fim<b.fim;
}


int main()
{
    int n,resp=0;
    cin>>n;
    pessoas p[n];
    for(int i=0;i<n;i++)
        cin>> p[i].inicio>>p[i].fim;

    sort(p,p+n,Comparar);

    int aux=p[0].fim;
    for(int i=1;i<n;i++)
    {
        if(p[i].inicio>=aux)
        {
            resp++;
            aux=p[i].fim;
        }
    }

    cout <<resp+1;

    return 0;
}
