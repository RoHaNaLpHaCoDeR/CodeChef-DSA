#include <iostream>
using namespace std;

int sum(int p){
    int summ=0;
    for(int i=1;i<=p ;i++){
        summ+=i;
    }
    return summ;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,n;
	    cin>>d>>n;
	    int x=0;
	    int y=n;
	    for(int j=1;j<=d;j++){
	        x = sum(y);
	        y=x;
	    }
	    cout<<y<<endl;
	}
	return 0;
}
