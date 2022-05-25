#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int k;
	    cin>>k;
	    int even=0;
	    int odd=0;
	    int pos=0;
	    if(k%2==0){
	        even=(k/2);
	        odd=(k/2);
	    }
	    else{
	        even=(k/2);
	        odd=((k/2)+1);
	    }
	    pos=odd*3-even;
	    cout<<pos<<endl;
	}
	return 0;
}
