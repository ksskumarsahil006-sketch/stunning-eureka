#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n;
    cin>>n;
    vector<int>freq(3,0);
    for(int i = 0; i < n ;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    int total = freq[1]+2*freq[2];
    if(total%2==1){
        cout<<"NO\n";
        return;
    }
    int half= total/2;
    if(half%2==1 and freq[1]<2){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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