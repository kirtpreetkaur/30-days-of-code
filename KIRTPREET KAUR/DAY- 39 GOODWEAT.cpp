#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[7];
	    int c=0;
	    for(int i=0;i<7;i++){
	        cin>>a[i];
	        if(a[i]==1) c++;
	    }
	    if(c>3) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
	return 0;
}
