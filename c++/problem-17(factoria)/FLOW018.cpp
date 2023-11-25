#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        int result=n*factorial(n-1);
        return result;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l;
	    cin>>l;
	    cout<<factorial(l)<<endl;
	    } 
	return 0;
}
