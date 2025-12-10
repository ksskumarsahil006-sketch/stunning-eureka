#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m ;
    cin>>n>>m;
    if((n==m and n==2 ) || (n==1 || m==1)){
        cout<<"YES\n";
    return;
    }
    cout<<"NO\n";
    return;
}
int main(){
    int  t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}