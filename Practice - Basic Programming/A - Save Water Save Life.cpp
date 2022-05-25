#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
    	int h,x,y,c;
    	cin>>h>>x>>y>>c;
    	int a = (x+floor(y/2))*h;
    	if(c >= a){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	}	    
	}

	return 0;
}
