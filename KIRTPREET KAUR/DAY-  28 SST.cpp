#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(100*a/10>100*b/20)
        cout<<"FIRST"<<endl;
        else if(100*a/10<100*b/20)
        cout<<"SECOND"<<endl;
        else cout<<"ANY"<<endl;
    }
	return 0;
}
