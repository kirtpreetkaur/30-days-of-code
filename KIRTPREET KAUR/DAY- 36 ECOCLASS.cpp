#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int count=0;
    int s[n],d[n];
    for (int i = 0; i < n; i++){
        cin>>s[i];
    }
    for (int i = 0; i < n; i++){
        cin>>d[i];
        if(s[i]==d[i]) count++;
    }
 cout<<count<<endl;
}
return 0;
}
