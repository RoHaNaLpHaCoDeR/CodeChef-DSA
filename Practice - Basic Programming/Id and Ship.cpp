#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    char ch;
	    cin>>ch;
	    if(ch == 'B' || ch == 'b'){
	        cout<<"BattleShip"<<endl;
	    }
	    else if(ch == 'C' || ch == 'c'){
	        cout<<"Cruiser"<<endl;
	    }
	    else if(ch == 'D' || ch == 'd'){
	        cout<<"Destroyer"<<endl;
	    }
	    else if(ch == 'F' || ch == 'f'){
	        cout<<"Frigate"<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
