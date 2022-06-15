#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int h, x, y, c;
	    cin>>h>>x>>y>>c;
	    if((c*h)>=(x+(y/2))) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
