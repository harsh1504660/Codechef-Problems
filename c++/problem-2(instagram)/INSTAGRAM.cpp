#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while (T--){
	    cin>>X;
	    cin>>Y;
	    if (X>(10*Y)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
