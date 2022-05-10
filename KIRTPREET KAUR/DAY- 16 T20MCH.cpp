#include <iostream>
using namespace std;
int main(){
    int r,o,c;
    cin>>r>>o>>c;
    int e,f,g;
    e=(20-o);
    g=e*36;
    f=g+c;
    if(f>r)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
	return 0;
}
