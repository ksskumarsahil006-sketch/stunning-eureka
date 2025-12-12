#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int &u:arr)cin>>u;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int count =0;
    int ma=INT_MIN;
    for(int i = 0 ; i < n ;i++){
        ma=max(ma,arr[i]);
        if(arr[i]<ma){
            count++;
        }
    }
    cout<<count<<endl;
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}