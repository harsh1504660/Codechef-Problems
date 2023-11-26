#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w1,w2 , x1,x2 ,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int inc_in_w = w2 - w1;
	    int low_per_m = x1*m;
	    int high_per_m = x2*m;
	    
	    if (inc_in_w < low_per_m){
	        cout<<0<<endl;
	    }
	    else{
	        if ((low_per_m <= inc_in_w) & (inc_in_w<= high_per_m)){
	            cout<<1<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	}
	return 0;
}
