#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;

    for(double i=-30;i<30;i+=0.1)
    {
        for(double j=-30;j<30;j+=0.1)
        {
            cout<< i<< " "<<j;
            if(i+j==a && i*j==b)
            {
                cout<< i<<" "<<j;
                return 0;
            }
        }
    }




}
