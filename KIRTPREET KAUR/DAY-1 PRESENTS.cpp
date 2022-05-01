#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n,a;
        cin >> n;
        a=n/5;
        n=n-a;
        cout<<n<<endl;
    }
	return 0;
}
