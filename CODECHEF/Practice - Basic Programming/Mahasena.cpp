#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int Lucky = 0;
	int NLucky = 0;
	for(int i=1;i<=N;i++){
	    int Weapons;
	    cin>>Weapons;
	    if(Weapons%2==0){
	        Lucky++;
	    }
	    else{
	        NLucky++;
	    }
	}
	if(Lucky>NLucky){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	    cout<<"NOT READY"<<endl;
	}
	return 0;
}
