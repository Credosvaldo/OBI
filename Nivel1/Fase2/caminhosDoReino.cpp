#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int n;
int vet[MAX];
int dpa[MAX];
int dpb[MAX];
int proa[MAX];
int prob[MAX];


int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>vet[i];
    }

    int q;
    cin>>q;

    for(int i=1;i<=q;i++)
    {
        int a,b;
        cin>>a>>b;

        memset(proa,0,sizeof(proa));
        memset(prob,0,sizeof(prob));

        dpa[a]=0;
        dpb[b]=0;
        proa[a]=1;
        prob[b]=1;
        a=vet[a];
        b=vet[b];
        dpa[a]=1;
        dpb[b]=1;


        if(a==b)
        {
            cout<< "0\n";
            continue;

        }

/*

6
2 6 1 6 2 5
1
5 2

*/


        while(true)
        {
            if(!proa[a])
            {
                //cout<< "executando o a\n";
                proa[a]=1;
                dpa[vet[a]]=dpa[a]+1;
                a=vet[a];
                //cout<< "volor do proximo a:"<<a<< "\n";
                //cout<< "valor do b: "<<b<< "\n";
                //cout<< "valor do prob a: "<<prob[a]<< "\n";

                if(prob[a])
                {
                    //cout<< "essa posicao ja foi marcada pelo b\n";
                    //cout<< "o valor de dpa[a]: "<<dpa[a]<< "\n";
                    //cout<< "o valor de dpb[a]: "<<dpb[a]<< "\n";
                    cout<< max(dpa[a],dpb[a])<< "\n";
                    break;

                }

            }


            if(!prob[b])
            {
                //cout<< "executando o b\n";
                prob[b]=1;
                dpb[vet[b]]=dpb[b]+1;
                b=vet[b];
                //cout<< "valor do proximo b: "<<b<< "\n";

                if(proa[b])
                {
                    //cout<< "eu desisto\n";
                    //cout<< "o valor de dpa[b]: "<<dpa[b]<< "\n";
                    //cout<< "o valor de dpb[b]: "<<dpb[b]<< "\n";
                    cout<< max(dpa[b],dpb[b])<< "\n";
                    break;

                }
            }



        }


    }




    return 0;
}
