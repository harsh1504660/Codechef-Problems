#include <iostream>
using namespace std;

int main() {
    int T;
	cin>>T;
	while (T--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    if (m>=n+k){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
