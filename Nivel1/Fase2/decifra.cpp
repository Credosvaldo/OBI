#include<bits/stdc++.h>
using namespace std;



int main()
{
    char senha[30],frase[100000];
    cin>>senha;
    cin>>frase;


    for(int i=0;i<strlen(frase);i++)
    {
        frase[i]=senha[frase[i]-65-32];

    }
    cout<< frase;

    return 0;
}
