#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve()
{
    int n;
    cin >> n;
    if (n / 10 == 0)
    {
        cout << n << endl;
        return;
    }
    int d = to_string(n).size();
    int count = 9 * (d - 1);
    int base = 0;
    for (int i = 0; i < d; i++)
    {
        base = base * 10 + 1;
    }
    count += n / base;

    cout << count << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}