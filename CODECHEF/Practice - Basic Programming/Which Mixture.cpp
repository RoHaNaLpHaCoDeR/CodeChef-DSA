#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    if(A>0 && B>0){
	        cout<<"Solution"<<endl;
	    }
	    else if(B==0){
	        cout<<"Solid"<<endl;
	    }
	    else if(A==0){
	        cout<<"Liquid"<<endl;
	    }
	    else{
	        return 0;
	    }
	}
	return 0;
}
