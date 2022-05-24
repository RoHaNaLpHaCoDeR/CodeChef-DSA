#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int R1,W1,C1;
	    cin>>R1>>W1>>C1;
	    int R2,W2,C2;
	    cin>>R2>>W2>>C2;
	    int countA=0;
	    int countB=0;
	    if(R1>R2){
	        countA+=1;
	    }
	    else{
	        countB+=1;
	    }

	    if(W1>W2){
	        countA+=1;
	    }
	    else{
	        countB+=1;
	    }

	    if(C1>C2){
	        countA+=1;
	    }
	    else{
	        countB+=1;
	    }
        if(countA>countB){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }

	}
	return 0;
}
