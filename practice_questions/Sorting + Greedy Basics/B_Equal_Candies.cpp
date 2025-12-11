#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x :a)cin>>x;
    int m = *min_element(all(a));
    int ans = 0;
    for(int i = 0; i < n;i++){
        ans+=a[i]-m;
    }
    cout<<ans<<endl;
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