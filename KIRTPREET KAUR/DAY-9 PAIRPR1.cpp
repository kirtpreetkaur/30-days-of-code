#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
ll T = 1;
bool isPrime(ll n){
    for (ll i = 2; i*i <= n ; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
int solve(){
    ll n;
    cin >> n;
    if (n <= 3){
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    for (int i = 2; i <= n/2 ; i++){
       if (isPrime(i) && isPrime(n - i)){
            cout << i << " " << n - i << endl;
            return 0;
        }
    }
    cout << -1 << " " << -1 << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
