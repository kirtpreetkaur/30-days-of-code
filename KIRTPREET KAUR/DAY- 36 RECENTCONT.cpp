#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	     int n=0;
        string s="";
        int counter1=0;
        int counter2=0;
        cin>>n;
        for(int i=0; i<n; i++){
        cin>>s;
        if(s=="START38") counter1++;
        else counter2++;
        }
        cout<<counter1<<" "<<counter2<<endl;
	}
	return 0;
}
