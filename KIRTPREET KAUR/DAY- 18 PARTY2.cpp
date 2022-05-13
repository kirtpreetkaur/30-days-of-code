#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n, x, k;
        cin>>n>>x>>k;
        if(x*n<=k)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
