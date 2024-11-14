#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long >v(n*2);
    set<int>sett;
    int maxSize=0;
    for(int i=0;i<n*2;i++)
    {
        cin>>v[i];
        if(sett.find(v[i])!=sett.end())
        {
            sett.erase(v[i]);
        }
        else
        {
            sett.insert(v[i]);
            maxSize=max(maxSize,(int)sett.size());
        }

    }
    cout<< maxSize<<endl;
    return 0;
}
