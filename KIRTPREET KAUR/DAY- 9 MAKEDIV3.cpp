#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    for(ll i=1;i<=n;i++){
	        if(i==1 || i==n){
	            cout<<'3';
	        }
	        else{
	            cout<<'0';
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
