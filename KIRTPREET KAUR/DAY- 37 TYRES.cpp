#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%4==0||n%4<2) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
