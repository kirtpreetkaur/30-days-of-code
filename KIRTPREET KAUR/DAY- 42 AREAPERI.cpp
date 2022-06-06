#include <iostream>
using namespace std;
int main() {
	int l, b, ar, per;
	cin>>l;
	cin>>b;
	ar=l*b;
	per=2*(l+b);
	if(ar>per) cout<<"Area"<<endl;
	else if (ar<per) cout<<"Peri"<<endl;
	else cout<<"Eq"<<endl;
	cout<<max(ar, per)<<endl;
	return 0;
}
