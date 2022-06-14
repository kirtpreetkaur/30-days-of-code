#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, i, arr[n];
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	        int count=0;
	        for(int i=0; i<n; i++){
	            if(arr[i]%7 != 6 && arr[i]%7 != 0) count++;
	    }
	    cout<<count+8<<endl;
	}
	return 0;
}
