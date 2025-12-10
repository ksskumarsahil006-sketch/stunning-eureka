#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i  =0 ; i < n ;i++){
        int x ;
        cin>>x;
        a.pb(x);
    }
    int count= 0;
    for(int i  =0 ; i < n ;i++){
        int x ;
        cin>>x;
        b.pb(x);
        if(b[i]==1)count++;
    }
    if(count>=1 and n-count>=1){
        cout<<"YES\n";
    }else{
        if(is_sorted(all(a))){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
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