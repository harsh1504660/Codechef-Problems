#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if (x<=3){
	        int time_req=x*y;
	        cout<<time_req<<endl;
	    }
	    else{
	        if (x%3==0){
	            int a=(x/3)-1;
	            int b=x*y;
	            int c=a*z;
	            cout<<b+c<<endl;
	        }
	        else{
	            int a=x/3;
	            int b=x*y;
	            int c=a*z;
	            cout<<b+c<<endl;
	        }
	    }
	}
	
	return 0;
}
