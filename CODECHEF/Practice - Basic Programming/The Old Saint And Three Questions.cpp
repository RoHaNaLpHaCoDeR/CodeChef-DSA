#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A1,A2,A3;
	    cin>>A1>>A2>>A3;
	    int B1,B2,B3;
	    cin>>B1>>B2>>B3;
	    if(A1+A2+A3 == B1+B2+B3){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	}
	return 0;
}
