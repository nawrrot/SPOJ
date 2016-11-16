#include <iostream>
 
using namespace std;
 
int main()
{
    int howmsign;
    string word;
    while(getline(cin,word))
    {
        howmsign = word.length();
        for (int i=howmsign-1; i>=0; i--)
        {
            cout <<word[i];
        }
        cout<<endl;
    }
    return 0;
}
