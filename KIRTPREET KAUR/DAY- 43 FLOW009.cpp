#include<iomanip>
#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t--)
	 {
	    double p;
	    double q,a;
	     cin>>q>>p;
	     if(q>1000)
	     { 
	         a=(p*q-((p*q)/10));
	       
	     }
	     else 
	     a=p*q;
	     cout<<fixed<<setprecision(6)<<a;
	     cout<<endl;
	 }
	return 0;
}
