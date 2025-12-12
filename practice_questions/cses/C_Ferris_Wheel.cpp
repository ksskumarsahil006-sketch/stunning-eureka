#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int &x:arr)cin>>x;
    sort(all(arr));
    int left = 0;
    int right = n-1;
    int count = 0;
    while(left<=right){
        if(arr[left]+arr[right]<=k){
            left++;
            right--;
        }
        else{
            right--;
        }
        count+=1;
    }
    cout<<count<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}