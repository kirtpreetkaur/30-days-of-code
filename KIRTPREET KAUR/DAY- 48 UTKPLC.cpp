#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    char first, second, third, x, y;
	    cin>>first>>second>>third;
	    cin>>x>>y;
	    if(x==first || y==first) cout<<first<<endl;
	    else cout<<second<<endl;
	}
	return 0;
}
