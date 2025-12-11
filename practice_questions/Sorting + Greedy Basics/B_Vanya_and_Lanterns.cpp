#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n ;
    int d;
    cin>>n>>d;
    vector<int>a(n);
    for(int &u:a)cin>>u;
    sort(all(a));
    long double ma = 0;
    ma= max(ma,(long double)a[0]);
    for(int i = 1 ; i < n ; i++){
        ma=max(ma,(long double)(a[i]-a[i-1])/2.0);
    }
    ma=max(ma,(long double)d-a[n-1]);
    cout<<fixed<<setprecision(10)<<ma<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}