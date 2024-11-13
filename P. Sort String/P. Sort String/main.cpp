#include <iostream>

using namespace std;

int main()
{
   int  n;
    cin>>n;

    long long  freq[26]={0};
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        freq[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        while(freq[i-'a']>0)
        {
            cout<<i;
            freq[i-'a']--;
        }
    }
    return 0;
}
