#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> freq(5,0);
    for(int i =0 ; i < n ;i++){
        int x ;
        cin>>x;
        freq[x]++;
    }
    int count = 0;
    count+=freq[4];
    count += min(freq[3], freq[1]);
    int x = min(freq[3], freq[1]);
    freq[3] -= x;
    freq[1] -= x;
    if(freq[3]!=0){
        count+= freq[3];
    }
    count += freq[2] / 2;
    freq[2] %= 2;

    if(freq[2] != 0){
        count++;
        freq[1] = max(0, freq[1]-2);
    }
    cout<<(count + (freq[1] + 3) / 4)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1; // Number of test cases
    while (t--) {
        solve();
    }
    
    return 0;
}   