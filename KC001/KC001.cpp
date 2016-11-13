#include <iostream>

using namespace std;

int main()
{
    int a,result=0;

    for(int i=0; i<3; i++)
    {
        cin>>a;
        result+=a;
    }
    cout << result << endl;
    return 0;
}
