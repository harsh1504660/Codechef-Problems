#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int a,b;
	    cin>>a>>b;
	    int add = a+b;
	    if (add < 3){
	        cout<<'1'<<endl;
	    }
	    else if (3 <= add && add <= 10){
	        cout<<'2'<<endl;
	    }
	    else if (11<= add && add <=60){
	        cout<<'3'<<endl;
	    }
	    else if (60 < add) {
	        cout<<'4'<<endl;
	    }
	}
	return 0;
}
