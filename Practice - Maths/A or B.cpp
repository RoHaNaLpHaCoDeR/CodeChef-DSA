#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int min_a=(500 - X*2) + (1000 - (Y+X)*4);
	    int min_b=(1000 - Y*4) + (500 - (X+Y)*2);

	   if(min_b>min_a){
	       cout<<min_b<<endl;
	   }
	   else if(min_b<min_a){
	       cout<<min_a<<endl;
	   }
	   else{
	       cout<<min_a<<endl;
	   }
	}
	return 0;
}
