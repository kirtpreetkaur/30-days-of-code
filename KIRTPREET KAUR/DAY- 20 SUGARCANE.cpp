#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--){
	    int n, total_income, buy_sugarcane, buy_spices, shop_on_rent;
	    cin>>n;
	    total_income=50*n;
	    buy_sugarcane=0.2*total_income;
	    buy_spices=0.2*total_income;
	    shop_on_rent=0.3*total_income;
	    cout<<total_income-(buy_sugarcane+buy_spices+shop_on_rent)<<endl;
	}
	return 0;
}
