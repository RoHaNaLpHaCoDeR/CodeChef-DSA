#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int factorial=1;
	    int i=1;
	    while(i<=N){
	        factorial=factorial*i;
	        i++;
	    }
	    cout<<factorial<<endl;
	}
	return 0;
}
