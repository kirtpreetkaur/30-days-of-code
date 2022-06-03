#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, a, b, c, d, e, f, g, h;
	    cin>>n;
	    a=n%100;
	    b=a%50;
	    c=b%10;
	    d=c%5;
	    e=d%2;
	    f=e%1;
	    cout<<(n/100)+(a/50)+(b/10)+(c/5)+(d/2)+(e/1)<<endl;
	}
	return 0;
}
