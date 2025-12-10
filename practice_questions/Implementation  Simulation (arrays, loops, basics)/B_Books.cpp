#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m ;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    int left = 0, curr_sum = 0, ml = 0;

    for (int i = 0; i < n; i++) {  
        curr_sum += arr[i];

        while (curr_sum > m) {   
            curr_sum -= arr[left];
            left++;
        }

        ml = max(ml, i - left + 1);
    }
    cout<<ml;
    return 0;
}