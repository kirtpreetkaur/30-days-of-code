#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2 ;
        if( x1==x2 && y1==y2 ) cout << 0 << endl;
        else if ((x1+y1)%2==(x2+y2)%2) cout << 2 << endl; 
        else cout << 1 << endl;

    }
    return 0;
}
