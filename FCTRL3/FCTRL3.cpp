#include <iostream>
using namespace std;

int main()
{
    int factorial, t, result, TensDigit, UnitsDigit;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> factorial;
        if(factorial<10 && factorial>=0)
        {
            result=1;
            for(int i=1; i<=factorial; i++)
            {
                result*=i;
            }
            UnitsDigit=result%10;
            TensDigit=(result/10)%10;
            cout << TensDigit << " " << UnitsDigit << endl;
        }
        else
            cout << "0 0" << endl;
    }
    return 0;
}
