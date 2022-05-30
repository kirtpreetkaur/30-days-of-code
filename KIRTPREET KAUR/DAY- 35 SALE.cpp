#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b, c, d;
	    cin>>a>>b>>c;
	    d=min(a,b);
	    cout<<(a+b+c-(min(d,c)))<<endl;
	}
	return 0;
}
