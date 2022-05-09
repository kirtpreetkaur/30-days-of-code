#include <iostream>
using namespace std;

int main() {
	int t, x, z, b, y, a;
	cin>>t;
	while(t--){
	    cin>>x;
	    y=x/10;
	    z=x%10;
	    a=z/5;
	    b=z%5;
	    if(b==0){
	        cout<<y+a<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
