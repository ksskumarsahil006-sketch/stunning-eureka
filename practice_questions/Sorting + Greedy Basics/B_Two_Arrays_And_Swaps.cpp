#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int  n; 
    int k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>brr(n);
    for(int &u: arr)cin>>u;
    for(int &u: brr)cin>>u;
    sort(all(arr));
    sort(all(brr));
    if(brr[n-1]<=arr[0]){
        int count = 0; 
        for(int  i =0; i <  n ;i++){
            count+=arr[i];
        }
        cout<<count<<"\n";
        return;
    }
    reverse(all(brr));
    for(int  i =0; i< k;i++){
        if(brr[i]>arr[i]){
            arr[i] = brr[i];
        }
    }
    cout<<accumulate(all(arr),0ll)<<"\n";
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