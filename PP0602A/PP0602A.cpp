#include <iostream>

using namespace std;

int main()
{
    int t, howm;
    int *arr = new int [howm];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> howm;
        for(int i=0; i<howm; i++)
        {
            cin >> arr[i];
        }

        for(int i=1; i<howm; i+=2)
        {
            cout << arr[i] << " ";
        }


        for(int i=0; i<howm; i+=2)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
return 0;
}
