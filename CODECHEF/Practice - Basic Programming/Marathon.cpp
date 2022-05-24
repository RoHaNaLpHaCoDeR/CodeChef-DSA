#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d,e;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>e;
        a=a*b;
        if(a>=10&&a<21)
        cout<<c<<endl;
        else if(a>=21&&a<42)
        cout<<d<<endl;
        else if(a>=42)
        cout<<e<<endl;
        else
        cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}