#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,x,y,xr,yr,d;
	cin>>t;
	while(t--){
	    cin>>x>>y>>xr>>yr>>d;
	    int food,water;
	    food = x/xr;
	    water = y/yr;
	    int mini;
	    mini = min(food,water);
	    if(mini>=d){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
