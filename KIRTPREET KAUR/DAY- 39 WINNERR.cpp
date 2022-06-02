#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int pa, pb, qa, qb;
	    cin>>pa>>pb>>qa>>qb;
	    if(max(pa,pb)<max(qa,qb)) cout<<"P"<<endl;
	    else if(max(pa,pb)>max(qa,qb)) cout<<"Q"<<endl;
	    else cout<<"TIE"<<endl;
	}
	return 0;
}
