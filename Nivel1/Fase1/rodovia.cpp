#include<bits/stdc++.h>
using namespace std;
/*
void Mostrar(bool m[][] , int N)
{
    for(int i=1;i<=N;i++)
    {
        cout<< "\n";
        for(int j=1;j<=N;j++)
        {
            cout<< m[i][j]<< " ";
        }
    }




}*/


int main()
{
    int N,aux1,aux2;
    cin>>N;

    bool v[N+1][N+1],vAux[N+1];


    for(int i=1;i<=N;i++)
    {
        vAux[i]=0;
        for(int j=1;j<=N;j++)
            v[i][j]=0;
    }



    for(int i=0;i<N;i++)
    {
        cin>>aux1>>aux2;
        v[aux1][aux2]=1;
    }

    aux1=0;
  //  cout<< "\n" << N << "\n";
//
    //Mostrar(v,N);
   // cout<< "\n mostrei \n";
/*
        for(int i=1;i<=N;i++)
    {
        cout<< "\n";//////////////////////////////////////////////////////////////////
        for(int j=1;j<=N;j++)
        {
            cout<< v[i][j]<< " ";
        }
    }
    cout<< "\n";
*/
    for(int i=1;i<=N;i++)
    {
    //    cout<< i << "\n";
        if(vAux[i])
        {
            if(aux1 == N && i==1)
            {
                cout<< 'S';
                return 0;
            }
            else
            {
                cout<< 'N';
                return 0;
            }
        }

        for(int j=1;j<=N;j++)
        {
            if(v[i][j] == 1)
            {
                vAux[i]=1;
                i=j-1;
                aux1++;
                break;
            }
            else if(j==N)
            {
                cout<< 'N';
                return 0;
            }
        }
    }



/*
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
            if(v[i][j])
            {
                if(aux2)
                {
                    cout<< 'N';
                    return 0;
                }
                aux2=true;
            }
        aux2=false;
    }

    cout<< 'S';     */

    return 0;
}
