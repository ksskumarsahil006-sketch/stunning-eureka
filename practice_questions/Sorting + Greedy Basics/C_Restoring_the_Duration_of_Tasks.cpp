#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int &u: a)cin>>u;
    vector<int>b(n);
    for(int &u: b)cin>>u;
    if(n==1){
        cout<<b[0]-a[0]<<endl;
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(i==0){
            cout<<b[i]-a[i]<<" ";
        }else{
            if(a[i]<b[i-1]){
                cout<<b[i]-b[i-1]<<" ";
            } else {
                cout<<b[i]-a[i]<<" ";
            }
        }
    }
    cout<<endl;
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