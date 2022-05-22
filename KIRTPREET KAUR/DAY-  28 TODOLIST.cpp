#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	    int m , count=0;
	    cin>>m;
	    for(int i=0; i<m; i++){
	        int x;
	        cin>>x;
	        if(x>=1000){
	            count++;
	        }
	               
	    }
	        cout<<count<<endl;
	    
	}
	return 0;
}
