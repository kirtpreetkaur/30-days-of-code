#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m, h, x, bmi;
	    cin>>m>>h;
	    x=h*h;
	    bmi=m/x;
	    if(bmi<=18) cout<<"1"<<endl;
	    else if (bmi>18 && bmi<25) cout<<"2"<<endl;
	    else if (bmi>24 && bmi<30) cout<<"3"<<endl;
	    else cout<<"4"<<endl;
	}
	return 0;
}
