#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n,0);
    for(int i= 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int min_val=*min_element(arr.begin(),arr.end());
    int count = 0 ;
    int pos = 
    -1;
    bool flag = false;
    for(int i =0 ; i < n ;i++){
        if(arr[i]==min_val){
            count+=1;
            pos=i+1;
        }
        if(count>=2){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<pos<<endl;
    }
    return 0;
}