#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char rep;
    string tag;
    while(getline(cin,tag))
    {
        for(int i=0; i<tag.length(); i++)
        {
            if(tag[i] == '<')
            {
                for(i; tag[i]!='>'; i++)
                {
                    rep=tag[i];
                    rep=toupper(rep);
                    cout<<rep;
                }
            }
            cout<<tag[i];
        }
        cout<<endl;
    }
}
