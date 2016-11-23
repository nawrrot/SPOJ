#include <iostream>

using namespace std;

int main()
{
    int n,t;
    int *arr= new int [n];
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        /*  for(int i=0; i<n; i++)
        {
                swap(arr[i], arr[n-1]);

            cout << arr[i] << " ";
        }*/
        for(int i=1; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << arr[0] << endl;
    }

    delete [] arr;
    return 0;
}

