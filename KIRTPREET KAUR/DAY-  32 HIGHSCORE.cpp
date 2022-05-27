#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, na, nb, nc, nd;
	    cin>>n;
	    cin>>na>>nb>>nc>>nd;
	    cout<<max(max(na, nb), max(nc, nd))<<endl;
	}
	return 0;
}
