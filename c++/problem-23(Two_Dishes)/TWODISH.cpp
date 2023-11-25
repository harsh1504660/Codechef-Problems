#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,A,B,C;
	    cin>>N>>A>>B>>C;
	    if (B <N){
	         cout<<"NO"<<endl;
	    }
	    else{
	        if ((A+C) >= N){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
