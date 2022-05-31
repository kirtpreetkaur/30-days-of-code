#include <iostream>
using namespace std;
int main() {
	int t, max1=0, max2=0;
	cin>>t;
	int score1=0, score2=0, temp1, temp2;
	for(int i=0;i<t;i++){
	    cin>>temp1>>temp2;
	    score1+=temp1;
	    score2+=temp2;
	    
	    if(score1>score2){
	        if(score1-score2>=max1)
	        max1=score1-score2;
	    }
	    else{
	        if(score2-score1>=max2)
	        max2=score2-score1;
	    }
	}
	if(max1>max2)
	cout<<"1 "<<max1<<endl;
	else
	cout<<"2 "<<max2<<endl;
	return 0;
}
