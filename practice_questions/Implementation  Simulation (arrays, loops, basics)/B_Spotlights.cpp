#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m ;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m,0));
    vector<int>row(n,0),column(m,0);
    for(int i =0 ; i < n ;i++){
        for(int j = 0 ; j < m ;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                row[i]++;
                column[j]++;
            }
        }
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int ir = 0;
        for(int j = 0; j < m ; j++){
            if(arr[i][j]==0){
                if(ir>0)count++;
                if(ir!=row[i]){
                    count++;
                }
            }else ir++;
        }
    }
    for(int j = 0; j < m ;j++){
        int ic = 0;
        for(int i =0 ; i < n ;i++){
            if(arr[i][j]==0){
                if(ic>0)count++;
                if(ic!=column[j])count++;
            }else ic++;
        }
    }
    cout<<count<<endl;

    return 0;
}