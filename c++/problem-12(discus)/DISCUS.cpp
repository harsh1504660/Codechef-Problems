#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if (a<b){
	        if (b<c){
	            cout<<c<<endl;
	        }
	        else{
	            cout<<b<<endl;
	        }
	    }
	    else if (a<c){
	        cout<<c<<endl;
	    }
	    else {
	        cout<<a<<endl;
	    }
	}
	return 0;
}
