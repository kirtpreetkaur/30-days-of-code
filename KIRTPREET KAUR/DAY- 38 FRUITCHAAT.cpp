#include <iostream>
using namespace std;
int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int x, y;
	     cin>>x>>y;
	     if(x>=(2*y)) cout<<y<<endl;
	     else cout<<x/2<<endl;
	 }
	return 0;
}
