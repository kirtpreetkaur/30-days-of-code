#include <iostream>
using namespace std;
int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int x, y, z;
	     cin>>x>>y;
	     z=(x-y)/2;
	     if(x<=y) cout<<y-x<<endl;
	     else if((x-y)%2==0) cout<<z<<endl;
	     else cout<<z+2<<endl;
	 }
	return 0;
}
