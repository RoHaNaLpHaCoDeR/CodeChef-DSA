#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int G1,S1,B1,G2,S2,B2;
	    cin>>G1>>S1>>B1>>G2>>S2>>B2;
	    if(G1+S1+B1>G2+B2+S2){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;
	    }
	    
	}
	return 0;
}
