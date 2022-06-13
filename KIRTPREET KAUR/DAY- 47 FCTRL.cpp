#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    long n,count=0;
	    cin>>n;
	    while(n>0){
	        count+=n/5;
	        n=n/5;
	    }
	   cout<<count<<endl;
	}
	return 0;
}
