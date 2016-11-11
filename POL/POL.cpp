#include <iostream>
using namespace std;

int main()
{
    int result, n;

    string word;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin >> word;
        int leng = word.length();
        result=leng/2;
        for(int i=0; i<result; i++)
        {
            cout << word[i];
        }
        cout <<"\n";
    }
    return 0;
}

