#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0) cout<<3*n/2<<endl;
	    else cout<<3*(n-1)/2<<endl;
	}
	return 0;
}
