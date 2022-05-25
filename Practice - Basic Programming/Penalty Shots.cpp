#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A1,A2,A3,A4,A5,A6,A7,A8,A9,A10;
	    cin>>A1>>A2>>A3>>A4>>A5>>A6>>A7>>A8>>A9>>A10;
	    int E = A2+A4+A6+A8+A10;
	    int O = A1+A3+A5+A7+A9; 
	    if( E>O ){
	        cout<<2<<endl;
	    }
	    else if (E==O){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	    
	}
	return 0;
}
