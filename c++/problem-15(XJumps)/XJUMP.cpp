#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int x,y;
	    cin>>x>>y;
	    if (x%y==0){
	        int num_step=x/y;
	        cout<<num_step<<endl;
	    }
	    else{
	        int step=x%y;
	        int t=x/y;
	        int total_step=step+t;
	        cout<<total_step<<endl;
	    }
	}
	return 0;
}
