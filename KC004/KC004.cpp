#include <iostream>
 
using namespace std;
 
int main()
{
 
    int number1, n, result;
 
    int *numbers2 = new int[n];
 
    while (cin >> number1)
    {
        result=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin >> numbers2[i];
            if(number1 == numbers2[i])
            {
                result+=1;
            }
        }
    cout << result << endl;
    
    }
    delete [] numbers2;
 
    return 0;
}
