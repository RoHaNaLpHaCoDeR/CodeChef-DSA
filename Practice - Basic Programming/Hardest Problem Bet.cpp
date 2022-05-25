#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int Sa,Sb,Sc;
	    cin>>Sa>>Sb>>Sc;
	    if(Sc<Sa && Sc<Sb){
	        cout<<"Alice"<<endl;
	    }
	    else if(Sb<Sc && Sb<Sa){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
