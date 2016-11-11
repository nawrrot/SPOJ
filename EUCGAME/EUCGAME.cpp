#include <iostream>
using namespace std;

int main()
{
    int player1, player2, t, result;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> player1 >> player2;
        result=0;
        while(player1*player2!=0)
        {
            if(player1>player2)
            {
                player1%=player2;
            }
            else
            {
                player2%=player1;
            }
        }
        if(player1>player2)
        {
            result=player1*2;
        }
        else
        {
            result=player2*2;
        }
        cout << result << endl;
    }
    return 0;
}
