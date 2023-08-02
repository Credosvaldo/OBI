#include<bits/stdc++.h>
using namespace std;

int m[100][100];
int n;

int soma(int l,int c)
{
    int cont=0;
    int resp=0;

    for(int i=l;i<n;i++)
    {
        for(int j=c;j<n;j++)
        {
            resp+=m[i][j];
            cont++;
            if(cont==5)return resp;
        }
    }



}

int main()
{
    cin>>n;



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int aux;
            aux=rand();

            if(aux==0)
                aux=1;

            m[i][j]=aux%101;
        }
    }

    int maior=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n-1 && j==n-4)
                break;

            maior = max(maior,soma(i,j));

        }
    }

    cout<< maior;

    return 0;
}
