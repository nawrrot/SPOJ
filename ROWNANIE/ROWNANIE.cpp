#include <iostream>
using namespace std;

int main()
{
    double a, b, c, delta;

    while(cin>>a>>b>>c)
    {
        delta=(b*b)-(4*a*c);
        if(delta>0)
            cout<<"2\n";
        else if(delta==0)
            cout<<"1\n";
        else if(delta<0)
            cout<<"0\n";
    }
    return 0;
}
