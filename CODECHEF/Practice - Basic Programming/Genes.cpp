#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char S1,S2;
	cin>>S1>>S2;
	if(S1==S2){
	    cout<<S1<<endl;
	}
	else if(S1 =='R' && S2 == 'B' || S1 == 'B' && S2 == 'R' || S1 == 'R' && S2 == 'G' || S1 == 'G' && S2 == 'R'){
	    cout<<'R'<<endl;
	}
	else if(S1 == 'B' && S2 == 'G' || S1 == 'G' && S2 == 'B'){
	    cout<<'B'<<endl;
	}
	else{
	    return 0;
	}
	return 0;
}
