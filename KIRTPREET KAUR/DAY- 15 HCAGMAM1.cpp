#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int X,Y;
	    cin>>X>>Y;
	    string c;
	    cin>>c;
	    int x=0,y=0,z=0,k=0;
	    for(int i=0;i<30;i++){
	        if(c[i]=='1'){
	            x+=1;
	            y+=1;
	        }
	        else{
	            y=0;
	        }
	        if(z<=y){
	            z=y;
	        }
	    }
	    cout<<X*x +Y*z<<endl;
	   
	}
	return 0;
}
