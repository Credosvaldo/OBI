#include<bits/stdc++.h>
using namespace std;

const int a = 10;


int main()
{
    const int *b;
    b=&a;

    int c=5;

    int *d;

    *b=6;

    *d=8;

    cout<< c<< "\n";

    cout<< *b;


    return 0;
}
