#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b, m;
	    cin>>a>>b>>m;
	    int c=fabs(a-b);
        if(c<m-c) cout<<c<<endl;
        else cout<<m-c<<endl;
	}
	return 0;
}
