#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A==B && B==C){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	}
	return 0;
}
