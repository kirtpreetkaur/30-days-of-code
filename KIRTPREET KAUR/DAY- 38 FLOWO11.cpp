#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    float s;
	    cin>>s;
	    if(s<1500) printf("%0.2f\n",((s/10)+(9*s/10)+(s)));
	    else printf("%0.2f\n",(s+(500)+(98*s/100)));
	}
	return 0;
}
