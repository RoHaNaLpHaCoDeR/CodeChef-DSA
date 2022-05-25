#include <iostream>
using namespace std;

int main() {
	// your code goes here
    cin.tie(0);
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    int rem = X%4;
	    if(rem == 0){
	        cout<<"North"<<endl;
	    }
	    else if(rem ==3){
	        cout<<"West"<<endl;
	    }
	    else if(rem==2){
	        cout<<"South"<<endl;
	    }
	    else if(rem==1){
	        cout<<"East"<<endl;
	    }
	    else{
	        return 0;
	    }
	}       
	return 0;
}
