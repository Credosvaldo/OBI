#include<bits/stdc++.h>
#include<queue>
#define MAX 1000005
using namespace std;

struct ind{
int b,p,d;
};

int n,e;
queue<ind> v[MAX];
ind indio[MAX];
int pos[MAX];

bool qr()
{
    for(int i=1;i<=e;i++)
        if(v[pos[i]].size()!=1)
            return true;

    return false;

}

int main()
{
    int resp=0;
    cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
        int p,d;
        cin>>p>>d;

        indio[i].b=0;
        indio[i].p=p;
        indio[i].d=d;
        pos[i]=p;
        v[p].push(indio[i]);

    }






    do
    {

        for(int i=1;i<=e;i++)
        {

            int next;

            if(indio[i].p + indio[i].d > n) next = 1;
            else if(indio[i].p + indio[i].d < 1) next = n;
            else next = indio[i].p + indio[i].d;


            if(indio[i].b==resp)
            if(v[next].size() == 0 || v[next].size()==1 && v[next].front().d==indio[i].d )
            {
                v[indio[i].p].pop();
                indio[i].p=next;
                v[indio[i].p].push(indio[i]);
                indio[i].b++;

            }
            else
            {
                if(v[next].front().b==indio[i].b)
                {
                    indio[i].d*=-1;
                    indio[v[next].front()].d*=-1;
                    indio[i].b++;
                    indio[v[next].front()].b++;


                }
                else
                {
                    v[indio[i].p].pop();
                    indio[i].p=next;
                    indio[v[next].front()].d*=-1;
                    v[indio[i].p].push(i);
                    indio[i].d*=-1;
                    indio[i].b++;

                }

            }




        }

        resp++;

    }while(qr());


    cout<< resp;

    return 0;
}
