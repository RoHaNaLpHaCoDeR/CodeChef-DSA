#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,c;
	    cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if(b>c)
                cout<<b;
            else
                cout<<c;
        }
        else if(b>c && b>a)
        {
            if(c>a)
                cout<<c;
            else
                cout<<a;
        }
        else{
            if(a>b)
                cout<<a;
            else
                cout<<b;
        }
        cout<<endl;
	}
	return 0;
}
