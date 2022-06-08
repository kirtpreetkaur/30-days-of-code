#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y, p, q;
	    cin>>x>>y>>p>>q;
	    if((x+(x*p))>(y+(y*q))) cout<<"Chefina"<<endl;
	    else if((x+(x*p))<(y+(y*q))) cout<<"Chef"<<endl;
	    else cout<<"Draw"<<endl;
	}
	return 0;
}
