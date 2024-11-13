#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    map<int,int >mp;
    while(q--)
    {
        int z,x;
        cin>>z>>x;
        if(z==1)
        {
            mp[x]++;
        }else
        {
            cout<<mp[x]<<endl;
        }
    }
    return 0;
}
