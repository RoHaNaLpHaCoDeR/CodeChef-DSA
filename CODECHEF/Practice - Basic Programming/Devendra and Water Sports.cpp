#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
        int Z,Y,A,B,C;
        cin>>Z>>Y>>A>>B>>C;
        int rem = Z-Y;
        if(rem>=A+B+C){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
