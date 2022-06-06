#include <iostream>
using namespace std;
int main() {
	int t;
	string n;
	cin >> t;
	while (t--){
	    cin >> n;
	    if (n == "B" or n =="b") cout << "BattleShip" << endl;
	    else if (n == "C" or n == "c") cout << "Cruiser" << endl;
	    else if (n == "D" or n == "d") cout << "Destroyer" << endl;
	    else cout << "Frigate" << endl;
	    }
	    return 0;
	}
