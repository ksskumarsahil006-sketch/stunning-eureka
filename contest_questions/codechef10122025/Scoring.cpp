#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int x ; int y ;
	    cin>>x>>y;
	    int bob = (y-x) /2;
	    int alice = bob+x;
	    cout<<alice<<" "<<bob<<endl;
	}
	return 0;

}
