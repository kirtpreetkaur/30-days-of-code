#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i=0; i<n;i++){
	        cin>>arr[i];
	    }
	    int a = arr[0]+arr[n-1];
	    int x = a;
	    for(int i =0;i<n-1;i++)
	    {
	      int temp = arr[i] + arr[i + 1];
	      x = max(x,temp);
	      
	    }
	    cout<<x<<endl;
	}
	return 0;
}
