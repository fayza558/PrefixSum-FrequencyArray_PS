#include <iostream>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    long long  prefix[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    prefix[1]=arr[0];
    for(int i=2;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;
    }
    return 0;
}
