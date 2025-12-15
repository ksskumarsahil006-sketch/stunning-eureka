#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int  n , m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int &u:a)cin>>u;
    for(int&u :b)cin>>u;
    sort(all(a));
    sort(all(b));
    int app=0;
    int aprt=0;
    int count=0;
    while(app<n and aprt<m){
        int mr=a[app]-k;
        int nr=a[app]+k;
        if(b[aprt]>=mr and b[aprt]<=nr){
            count++;
            app++;
            aprt++;
        }else if(b[aprt]>nr){
            app++;
        }
        else{
            aprt++;
        }
    }
    cout<<count<<endl;
    return 0;
}