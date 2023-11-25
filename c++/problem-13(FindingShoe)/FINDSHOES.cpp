#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n,L;
	    cin>>n>>L;
	    if (n<L){
	       int total=n;
	       cout<<total<<endl;
	    }
	    else {
	        int r=n-L;
	        int totalR = 2*r;
	        int total_shoe = totalR + L;
	        cout<<total_shoe<<endl;
	    }
	}
	return 0;
}
