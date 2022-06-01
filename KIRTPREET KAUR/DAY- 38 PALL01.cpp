#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    string n, p;
	    cin>>n;
        p=n;
        reverse(n.begin(),n.end());
        if(n==p) cout<<"wins\n";
        else cout<<"loses\n";
	}
	return 0;
}
