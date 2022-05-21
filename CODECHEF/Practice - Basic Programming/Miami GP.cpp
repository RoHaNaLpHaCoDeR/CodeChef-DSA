#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-- >0){
	    int X,Y;
	    cin>>X>>Y;
	    if(Y<=1.07*X){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;    
	    }
	}
	return 0;
}
