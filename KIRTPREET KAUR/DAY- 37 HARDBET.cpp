#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int sa, sb, sc, x;
	    cin>>sa>>sb>>sc;
	    x=min(min(sa,sb),sc);
	    if(sa==x) cout<<"Draw"<<endl;
	    else if (sb==x) cout<<"Bob"<<endl;
	    else cout<<"Alice"<<endl;
	}
	return 0;
}
