#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k, count=0;
	    cin>>k;
	    for(int i=1;i<=k;i++){
	        if(i%2!=0) count=count+3;
	        else count=count-1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
