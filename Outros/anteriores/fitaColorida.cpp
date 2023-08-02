#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int aux1=0;
    int aux2=0;
    cin>>N;
    int F[N];
    for(int i=0;i<N;i++)
    {
        cin>>F[i];
    }

    for(int i=0;i<N;i++)
    {
        if(F[i] == -1)
        {
            for(int j=i; F[j]==0; j++)
            {

                if(j==N-1)
                {
                    aux1=-1;
                    break;
                }
                else
                {
                    if(F[j]==0)
                    {
                        aux1=j-i;
                    }
                }

            }
            for(int j=i; F[j]==0; j--)
            {
                if(j<0)
                {
                    aux1=-1;
                    break;
                }

                else
                {
                    if(F[j]==0)
                    {
                        aux1=i-j;
                    }
                }

            }



            if(aux1==-1)
            {
                F[i]=aux2;
            }
            else if(aux2==-1)
            {
                F[i]=aux1;
            }
            else if(aux1>aux2)
            {
                F[i]=aux2;
            }
            else
            {
                F[i]=aux1;
            }




        }


    }

    for(int i =0;i<N;i++)
        cout<< F[1];



    return 0;
}
