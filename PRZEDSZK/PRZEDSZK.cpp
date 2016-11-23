#include <iostream>

using namespace std;

int main()
{
    int a, b, result, a1, b1, t;

    cin >> t;
    for(int i=0; i<t; i++)
    {
    cin >> a >> b;
        a1=a;
        b1=b;
        while (a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        result=(a1*b1)/a; // nwd=a;
        cout << result << endl;
    }
    return 0;
}

