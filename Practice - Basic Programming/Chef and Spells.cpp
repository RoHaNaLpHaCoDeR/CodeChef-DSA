#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    int p=A+B;
	    int q=B+C;
	    int r=C+A;
        cout<<max({p,q,r})<<endl;
	}
	return 0;
}
