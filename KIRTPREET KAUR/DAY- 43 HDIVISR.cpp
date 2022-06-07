#include <iostream>
using namespace std;

int main() {
	int x, a;
	cin>>x;
	for(int i=1; i<=10; i++){
	    if(x%i==0) a=i;
	}
	cout<<a;
	return 0;
}
