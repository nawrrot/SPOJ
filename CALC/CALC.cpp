#include <iostream>
using namespace std;

int main()
{
char sign;
int number1, number2, result=0;

    while(cin >> sign)
    {
         cin >> number1 >> number2;
         switch(sign)
         {
         case '-' :
              result = number1 - number2;
              break;
         case '+' :
              result = number1 + number2;
              break;
         case '*' :
              result = number1 * number2;
              break;
         case '/' :
              result = number1 / number2;
              break;
         case '%' :
              result = number1 % number2;
              break;
         }
         cout << result <<"\n";
    }


return 0;
}
