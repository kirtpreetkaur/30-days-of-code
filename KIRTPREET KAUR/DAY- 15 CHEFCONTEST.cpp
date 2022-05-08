
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        int chef,chefina;
        chef = x+p*10;
        chefina = y+q*10;
        if(chef<chefina)cout<<"Chef"<<endl;
        else if(chef>chefina)cout<<"Chefina"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}
