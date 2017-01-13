#include <iostream>

using namespace std;

int main()
{
    string pesel;
    int num[11]= {1,3,7,9,1,3,7,9,1,3,1};
    int result, t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
    result=0;
        cin >> pesel;
        for(int i=0; i<11; i++)
        {
            result+=(pesel[i]-'0')*num[i];
        //cout << result << endl;
        }
        if (result>0)
        {
            if(result%10==0)
            {
                cout << "D" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
        }
    else
        cout << "N" << endl;
}
    return 0;
}

