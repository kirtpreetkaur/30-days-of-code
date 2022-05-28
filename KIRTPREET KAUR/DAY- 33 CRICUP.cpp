#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    unsigned int x, y, d;
	    cin>>x>>y>>d;
	    if((x-y)<=d) cout<<"yes"<<endl;
	    else if ((y-x)<=d) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
