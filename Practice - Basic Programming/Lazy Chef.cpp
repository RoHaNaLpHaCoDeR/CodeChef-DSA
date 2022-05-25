#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,m,d;
	    cin>>x>>m>>d;
	    int A=m*x;
	    int B=x+d;
	    if(A>B){
	        cout<<B<<endl;
	    }
	    else{
	        cout<<A<<endl;
	    }
	}
	return 0;
}
