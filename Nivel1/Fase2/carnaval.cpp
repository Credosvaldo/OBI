#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    priority_queue<float>fila;
    fila.push(a);
    fila.push(b);
    fila.push(c);
    fila.push(d);
    fila.push(e);
    fila.pop();
    float aux=0;
    aux+= fila.top();fila.pop();
    aux+= fila.top();fila.pop();
    aux+= fila.top();fila.pop();
    cout<<fixed<< setprecision(1)<<aux;

// 6.1 9.0 7.7 9.5 8.3



    return 0;
}
