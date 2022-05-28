#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    cout<<max((500-(x*2))+(1000-((x+y)*4)),(1000-(y*4))+(500-((x+y)*2)))<<endl;
	}
	return 0;
}
