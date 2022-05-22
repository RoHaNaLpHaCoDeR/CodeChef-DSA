#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	    int x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;
	    int fs = x/xr;
	    int ws = y/yr;
	    if(min(fs,ws)>=d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
