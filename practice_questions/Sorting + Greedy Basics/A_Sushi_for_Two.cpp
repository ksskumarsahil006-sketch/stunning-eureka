#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n ;i++){
        cin>>a[i];
    }
    vector<int>length;
    int currlen=1;
    for(int i  = 1; i<n ;i++){
        if(a[i]==a[i-1]){
            currlen++;
        }else{
            length.pb(currlen);
            currlen=1;
        }
    }
    length.pb(currlen);
    int maxpo=INT_MIN;
    for(int i = 1;i < length.size();i++){
        maxpo=max(maxpo,min(length[i],length[i-1]));
    }
    cout<<maxpo*2<<endl;

    
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