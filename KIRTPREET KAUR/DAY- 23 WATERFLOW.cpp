#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int w, x, y, z, a;
	    cin>>w>>x>>y>>z;
	    a=w+y*z;
	    if(a<x)
	    cout<<"unfilled"<<endl;
	    else if (a>x)
	    cout<<"overflow"<<endl;
	    else cout<<"filled"<<endl;
	}
	return 0;
}
