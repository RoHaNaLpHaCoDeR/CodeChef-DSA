#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int R = Y-X;
	    if(R%8==0){
	        cout<<R/8<<endl;
	    }
	    else{
	        cout<<((R/8) + 1)<<endl;
	    }
	    
	}
	return 0;
}
