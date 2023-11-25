#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X;
	    cin>>Y;
	    if (X<Y){
	        int i=0;
	        while(X<Y){
	            X++;
	            i++;
	        }
	        cout<<i<<endl;
	    }
	    else {
	        int j=0;
	        while (X>Y){
	            X--;
	            j++;
	        }
	        cout<<j<<endl;
	    }
	    
	}
	return 0;
}
