#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else if(n==2)
        {
            cout<<"2 1"<<endl;
        }
        else
        {
            cout<<"1 ";
            for(i=2;i<n;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<"2"<<endl;
        }
        
    }
    return 0;
}
