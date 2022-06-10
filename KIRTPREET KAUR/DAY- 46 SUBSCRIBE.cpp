#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x, z;
	    cin>>n>>x;
	    if(n%6==0) z=n/6;
	    else z=(n/6)+1;
	    cout<<z*x<<endl;
	}
	return 0;
}
