#include<bits/stdc++.h>
using namespace std;

struct chara{
char c;
chara *p;
};

int main()
{
    int n,aux;
    cin>>n;
    aux=n;

    chara v;
    chara *o;

    v.c='c';
    o=&v;

    while(n!=0)
    {
        n--;

        cin>> o->c;
        o->p = new chara;
        o = v.p;

    }

    cout<< v.c<< "\n\n";


    cout<< "\n";

    while(aux!=0)
    {
        aux--;
        cout<< v.c<< " ";
        v = *v.p;
    }


    return 0;
}
