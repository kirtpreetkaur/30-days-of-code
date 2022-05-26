#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--){
	    int x;
	    cin>>x;
	    if(x%3==0) cout<<"normal"<<endl;
	    else if(x==1||x%3==1) cout<<"huge"<<endl;
	    else cout<<"small"<<endl;
	}
	return 0;
}
