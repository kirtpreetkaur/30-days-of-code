#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll t,shots[10];
    cin>>t;
    while(t--)
    {
        ll two_shots=0;
        ll one_shots=0;
        for(ll i=0; i<10;i++){
            cin>>shots[i];
        }
        for(ll j=0 ;j<10;j++)
        {
            if(j%2==0)
            {
                if(shots[j]==1)
                {
                    two_shots ++;
                }  
            }
            else if(j%2==1)
            {
                if(shots[j]==1)
                {
                    one_shots ++;
                }
            }
        }
        if(one_shots>two_shots)
        {
            cout<<2<<endl;
        }
        else if(one_shots==two_shots)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }    
    }
    return 0;
}
