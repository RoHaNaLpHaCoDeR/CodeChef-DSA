#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int A = Y-X;
	    int B = ceil(A/2.0f);
	    if(B<=Z){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
