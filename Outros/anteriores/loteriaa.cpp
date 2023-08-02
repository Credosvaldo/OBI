#include<iostream>
using namespace std;
int main()
{
    int n[6];
    int v[6];
    int r=0;

    for(int i=0; i<6 ;i++)
        cin>> n[i];
    for(int i=0; i<6 ;i++)
        cin>> v[i];

    for(int i=0; i<6 ;i++)
        for(int j=0; j<6 ;j++)
            if(n[i]==v[j])
                r++;

    if(r==3)
        cout<< "terno";
else
    if(r==4)
        cout<< "quadra";else
    if(r==5)
        cout<< "quina";else
    if(r==6)
        cout<< "sena";else cout<< "azar";


    return 0;
}
