#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    if(x>y) cout<<(2*y)+(x-y)<<endl;
	    else cout<<(2*y)-1<<endl;
	}
	return 0;
}
