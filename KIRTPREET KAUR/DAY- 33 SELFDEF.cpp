#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int age;
        int num=0;
        for(int j=0;j<n;j++){
            cin>>age;
            if (age>=10 && age<=60)
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
