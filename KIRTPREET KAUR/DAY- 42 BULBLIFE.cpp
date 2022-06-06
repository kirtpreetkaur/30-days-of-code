#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x, y, z=0;
	    cin>>n>>x;
	    for(int i=0; i<n-1;i++){
	        cin>>y;
	        z=z+y;	    
	    }
	    int k = (n*x)-z;
	    if (k<0)
	        k=0;
	    cout << k << endl;
	}
	return 0;
}
