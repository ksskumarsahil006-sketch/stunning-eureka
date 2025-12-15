#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    vector<int >odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    for(int i=even.size()-2;i>=0;i--){
        even[i]+=even[i+1];
    }
    reverse(even.begin(),even.end());
        
    for(int k=1;k<=n;k++){
        if(odd.size()==0) cout<<0<<" ";
        else if(even.size()==0 && k%2!=0) cout<<odd[odd.size()-1]<<" ";
        else if(even.size()==0 && k%2==0) cout<<0<<" ";
        else if(k==1) cout<<odd[odd.size()-1]<<" ";
        else if(k<=1+even.size()) cout<<odd[odd.size()-1]+even[k-2]<<" ";
        else if((k-even.size())%2==0){
            if(even.size()==1) {
                if(k<=odd.size()) cout<<odd[odd.size()-1]<<" ";
                else cout<<0<<" ";
            }
            else{
               if(odd.size()+even.size()-1>=k) cout<<odd[odd.size()-1]+even[even.size()-2]<<" ";
               else cout<<0<<" ";
            }
            
        }
        else cout<<odd[odd.size()-1]+even[even.size()-1]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}