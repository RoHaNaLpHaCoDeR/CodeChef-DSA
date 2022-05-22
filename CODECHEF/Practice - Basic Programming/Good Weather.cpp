#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A;
	    int S = 0;
	    int R = 0;
	    for(int i=1;i<=7;i++){
	       cin>>A;
	       if(A==1){
	           S++;
	       }
	       else{
	           R++;
	       }
	    }
	    if(S>=R){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
