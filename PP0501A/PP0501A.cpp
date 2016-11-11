#include <iostream>
using namespace std;


int main()
{
    int num1,num2,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        num1=0;
        num2=0;
        cin>>num1;
        cin>>num2;
        while(num1!=num2)
        {
            if(num1>num2)
                num1-=num2;
            else
                num2-=num1;
        }
        cout << num1<< endl;
    }


    return 0;
}
