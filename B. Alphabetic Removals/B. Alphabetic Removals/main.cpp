#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i='a';i<='z';i++)
    {
        if(k==0)
        {
            break;
        }
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==(char)i)
            {
                k--;
                s[j]=NULL;
            }
             if(k==0)
        {
            break;
        }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=NULL)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
