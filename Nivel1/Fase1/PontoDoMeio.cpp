#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin>>N;

  std::cout.unsetf ( std::ios::floatfield );                // floatfield not set
  std::cout.precision(0);
   // cout<<fixed<< pow(pow(2,N) + 1 , 2);

    double r = (pow(2,N) +1) * (pow(2,N) +1);
cout<<fixed<<r;

    /*
    unsigned long long int r =pow(pow(2,N) + 1 , 2);
    cout<< r <<"\n";
    long long int a = pow(2,50);
    cout<< a<<"\n";
    a*=a;
    cout<< a <<"\n";      */


    return 0;
}
