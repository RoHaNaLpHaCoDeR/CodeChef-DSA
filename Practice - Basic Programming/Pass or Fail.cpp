#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X,P;
	    cin>>N>>X>>P;
	    int total_marks= X*3 - (N-X)*1;
	    if(total_marks>=P){
	        cout<<"PASS"<<endl;
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}
