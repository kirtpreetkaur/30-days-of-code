#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x, y;
	    cin>>n>>x>>y;
	    if(x<=(y*(n+1))) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
