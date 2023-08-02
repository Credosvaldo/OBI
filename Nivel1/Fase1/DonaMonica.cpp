#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M,A,B;
    cin>>M>>A>>B;

    int c = M - (A+B);

    if(c>A)
    {
        if(c>B)
        {
            cout<< B;
        }
        else
        {
            cout << c;
        }
    }
    else
    {

    }




    return 0;
}
