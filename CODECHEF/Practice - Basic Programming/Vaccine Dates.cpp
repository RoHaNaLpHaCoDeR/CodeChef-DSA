#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int D,L,R;
	    cin>>D>>L>>R;
	    if(D>=L && D<=R){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(D>R){
	        cout<<"Too Late"<<endl;
	    }
	    else{
	        cout<<"Too Early"<<endl;
	    }
	}
	return 0;
}
