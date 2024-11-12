#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dp[100005] = {0};
    string s;
    cin >> s;
    int q;
    cin >> q;
    int l, r;


    for (int i = 1; i < s.size(); i++)
    {
        dp[i] = dp[i - 1];
        if (s[i] == s[i - 1])
        {
            dp[i]++;
        }
    }

    while (q--)
    {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }

    return 0;
}
