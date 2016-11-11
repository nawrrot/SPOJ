#include <iostream>

using namespace std;

int main()
{
    int number1, result=0, t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> number1;
        result=number1*number1;
        cout << result << "\n";
    }
    return 0;
}
