#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ;
    cin>>n>>k;
    string s ;
    cin>>s;
    string temp= s;
    for(int i = 0 ; i < k; i++){
        for(int j = 1; j < n ;j++){
            if(s[j]=='G' and s[j-1]=='B'){
                swap(s[j], s[j-1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}