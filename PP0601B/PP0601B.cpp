#include <iostream>

using namespace std;

int main()
{
   long int t,n,x,y;

    cin >> t;

    for(int i=0; i<t; i++)
    {
    cin >> n;
    cin >> x >> y;
    for(int i=1; i<n; i++)
    {
    if(i%x==0 && i%y!=0)
    cout <<i << " ";
    }
    }
    return 0;
}
