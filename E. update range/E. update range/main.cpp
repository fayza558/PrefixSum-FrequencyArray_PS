

#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long  arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long  freq[n + 1] = {0};
    while (q--)
    {
        long long l, r, val;
        cin >> l >> r >> val;
        freq[l - 1] += val;
        if (r < n)
        {
            freq[r] -= val;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            freq[i] += freq[i - 1];
        arr[i] += freq[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


