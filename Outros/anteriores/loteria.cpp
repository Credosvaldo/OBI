#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int V1[6],V2[6],aux=0;
    for(int i=0;i<6;i++)
        cin>>V1[i];
    for(int i=0;i<6;i++)
        cin>>V2[i];25 51 53 17 19 87
23 33 1 2 81 92
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        if (V1[i]==V2[j])
            aux=aux+1;
    if(aux==3)
        cout<< "terno";
    else if(aux==4)
        cout<< "quadra";
    else if(aux==5)
        cout<< "quina";
    else if(aux==6)
        cout<< "sena";
    else
        cout<< "azar";





    return 0;
}
