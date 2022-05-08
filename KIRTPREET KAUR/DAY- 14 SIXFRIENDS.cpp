#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	std::cin >> t;
	while(t>0)
	{
	    std::cin >>x>>y;
	    std::cout << (3*x<2*y? 3*x : 2*y) << std::endl;
	    t--;
	}
	return 0;
}
