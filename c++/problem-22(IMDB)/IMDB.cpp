#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,X;
	    cin>>N>>X;
	    int max_r = 0;
	    int Si , Ri;
	    for(int i=0;i<N;i++){
	        cin>>Si>>Ri;
	        if (Si<=X && Ri>=max_r){
	            max_r = Ri;
	        }
	        
	    }
	    cout<<max_r<<endl;
	}
	return 0;
}
