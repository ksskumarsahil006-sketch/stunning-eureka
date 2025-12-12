#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve(){
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    s+=s;
	n*=2;
	int cur =0;
	int res= 0;
	for (int i= 0; i< n; i++) {
		if (s[i] =='1') cur=0;
		else cur++;
		res = max(res, cur);
	}
	cout << res << "\n";

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