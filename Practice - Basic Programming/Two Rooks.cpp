#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
	    int X1,Y1,X2,Y2;
	    cin>>X1>>Y1>>X2>>Y2;
	    if(X1==X2 || Y1==Y2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
