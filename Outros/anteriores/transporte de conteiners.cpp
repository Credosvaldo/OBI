#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B,C,X,Y,Z,aux;
    cin>>A>>B>>C>>X>>Y>>Z;
    if (A>X||B>Y||C>Z)
    {
        cout<< "0";
    }
    else
    {
        cout<< (X/A)*(Y/B)*(Z/C);
    }





    return 0;
}
