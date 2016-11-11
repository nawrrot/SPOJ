#include <iostream>
using namespace std;

int main()
{
    int v1, v2, t, result;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> v1;
        cin >> v2;
        result=2*v1*v2/(v1+v2);
        cout << result << endl;
    }
    return 0;
}
