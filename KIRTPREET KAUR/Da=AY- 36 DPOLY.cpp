#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, count;
	    cin>>n;
	    int a, deg = 0;
	    for (int i=0;i<n;i++){
	        cin>>a;
	        if (a!=0){
	           deg = i; 
	        }
	        else{
	            continue;
	        }
	    }
	    cout<<deg<<endl;
	}
	return 0;
}
