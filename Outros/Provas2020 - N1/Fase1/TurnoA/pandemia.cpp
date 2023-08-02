#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,r,resultado=1;
    cin>>n>>m>>i>>r;
    bool v[n];
    v[i-1]=true;
    //R e a primeira reuniao

    for(int i=0;i<m;i++)
    {
        int aux,parada;
        cin>>aux;
        int resp[aux];
        bool in;

        if(i>=r)
        {
            for(int j=0;j<aux;j++)
            {
                cin>>resp[j];
                if(in)
                {
                    if(!v[resp[j]-1])
                    {
                        v[resp[j]-1]=true;
                        resultado++;
                    }


                }
                else if(v[resp[j]-1])
                {
                    in=true;
                    parada=j;
                }

            }

            if(in)
            {
                for(int j=0;j<parada;j++)
                    if(!v[resp[j]-1])
                    {
                        v[resp[j]-1]=true;
                        resultado++;
                    }
            }



        }
        else
            for(int j=0;j<aux;j++)
                cin>>resp[j];




    }


    cout<< resultado;


    return 0;
}
