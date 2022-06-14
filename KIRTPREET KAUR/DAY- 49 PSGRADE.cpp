#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int am, bm, cm, tm, a, b, c;
	    cin>>am>>bm>>cm>>tm>>a>>b>>c;
	    if(am<=a&&bm<=b&&cm<=c&&((a+b+c)>=tm)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
