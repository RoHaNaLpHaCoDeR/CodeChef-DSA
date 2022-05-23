#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
	int N;
	cin>>N;
	int count = 0;
	if(N==0){
	    count=1;
	}
	while(N!=0){
	    N=N/10;
	    ++count;
	}
	
	if(count<=3)
	cout<<count<<endl;
	else
	cout<<"More than 3 digits"<<endl;
	
	return 0;
}
