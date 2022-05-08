#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        float n, m, k, div;
        cin>>n>>m>>k;
        div=n/m;
        if (k>=div)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
