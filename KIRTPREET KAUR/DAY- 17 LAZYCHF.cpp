#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int x, m, d;
	    cin>>x>>m>>d;
	    int y=(x+d);
	    int z=(m*x);
	    if(y==z){
	        cout<<y<<endl;
	    }
	    else{
	        if(y>z){
	            cout<<z<<endl;
	        }
	        else{
	            cout<<y<<endl;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
