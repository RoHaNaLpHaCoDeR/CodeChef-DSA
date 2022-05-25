#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    float H,C,T;
	    cin>>H>>C>>T;
	    int Grade;
	    if(H>50 && C<0.7 && T>5600){
	        Grade = 10;
	    }
	    else if(H>50 && C<0.7 && T<=5600){
	        Grade = 9;
	    }
	    else if(H<=50 && C<0.7 && T>5600){
	        Grade = 8;
	    }
	    else if(H>50 && C>=0.7 && T>5600){
	        Grade = 7;
	    }
	    else if(H>50 || C<0.7 || T>5600){
	        Grade = 6;
	    }
	    else{
	        Grade = 5;
	    }
	    cout<<Grade<<endl;
	}
	return 0;
}
