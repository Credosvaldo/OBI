#include<bits/stdc++.h>
using namespace std;

struct jogador{
    char nome[1000];
    int h;
};

int main()
{
    int N,T;
    cin>>N>>T;
    jogador v[N];

    int resto=N%T;

    for(int i=0;i<N;i++)
        cin>> v[i].nome>>v[i].h;

    //sort
    for(int i=1;i<N;i++)
    {
        int j;
        jogador aux;
        aux=v[i];

        for(j=i; (j>0) && (v[j-1].h < aux.h);j-- )
            v[j]=v[j-1];
        v[j]=aux;

    }

    //impresao
    for(int i=1; i<=T;i++)
    {
        cout<< "Time "<<i<< "\n";
        int aux=0;
        int tamanho = floor(N/T);

        if(resto>0)
        {
            tamanho++;
            resto--;
        }


        jogador r[tamanho];

        for(int j=0; j<tamanho;j++)
        {
            r[j]=v[aux*T+i-1];
            aux++;
        }

        //sort
        for(int k=1;k<tamanho;k++)
        {
            int j;
            jogador aux;
            aux=r[k];

            for(j=k; (j>0) && (strcmp(r[j-1].nome, aux.nome)>0);j-- )
                r[j]=r[j-1];
            r[j]=aux;

        }

        for(int j=0;j<tamanho;j++)
        {
            cout<< r[j].nome << "\n";
        }
        cout<< "\n";

    }


    return 0;
}
