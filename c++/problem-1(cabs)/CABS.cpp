#include <iostream>
using namespace std;

int main() {
	int X,Y,T;
	cin>>T;
	while (T--){
	cin>>X;
	cin>>Y;
	if(X>Y){
	    cout<<"second"<<endl;
	}
	else if(X<Y){
	    cout<<"first"<<endl;
	}
	else{
	    cout<<"any"<<endl;
	}
	}
	return 0;
}
