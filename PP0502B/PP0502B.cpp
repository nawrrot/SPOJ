#include <iostream>
using namespace std;

int main()
{
    int num, t;
    int *arr=new int[num];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> num;
        for(int i=0; i<num; i++)
        {
            cin >> arr[i];
        }
        for(int i=num-1; i>=0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    delete [] arr;
    return 0;
}
