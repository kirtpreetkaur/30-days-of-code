#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p=0;
	    for(int i=2;i<=n;i++){
	        if(n%i==0) p++;
	    }
	    if(p==1) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
