#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>arr(n),brr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]>>brr[i];
    }
    int count = 1;
    int max_count = INT_MIN;
    sort(all(arr));
    sort(all(brr));
    int i = 0, j = 0;
    int current = 0, answer = 0;
    while (i < n) {
        if (arr[i] < brr[j]) {
            current++;
            answer = max(answer, current);
            i++;
        } else {
            current--;
            j++;
        }
    }
    cout<<answer<<endl;

    return 0;
}