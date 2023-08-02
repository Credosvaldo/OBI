#include<iostream>
using namespace std;
int main()
{
    int a,b;
    bool d=0;
    for(int i=0;i<16;i++)
    {
        int c;
        cin>>c;
        if(c==1) a=i+1;
        else if(c==9) b=i+1;

    }
    if(a <= 8 && b>=9)
    {
        cout<< "final";
        return 0;
    }
    else if(a>=1 && a<=4 && b>=5 && b<=8 || a>=9 && a<=12 && b>=13 && b<=16)
    {
        cout<< "semifinal";return 0;
    }
    else if(a>=1 && a<=2 && b>=3 && b<=4 || a>=5 && a<=6 && b>=7 && b<=8 || a>=9 && a<=10 && b>=11 && b<=12 || a>=13 && a<=14 && b>=15 && b<=16)
    {
        cout<< "quartas";return 0;
    }


    swap(a,b);


    if(a <= 8 && b>=9)
    {
        cout<< "final";
        return 0;
    }
    else if(a>=1 && a<=4 && b>=5 && b<=8 || a>=9 && a<=12 && b>=13 && b<=16)
    {
        cout<< "semifinal";return 0;
    }
    else if(a>=1 && a<=2 && b>=3 && b<=4 || a>=5 && a<=6 && b>=7 && b<=8 || a>=9 && a<=10 && b>=11 && b<=12 || a>=13 && a<=14 && b>=15 && b<=16)
    {
        cout<< "quartas";return 0;
    } cout<< "oitavas";

    return 0;
}
