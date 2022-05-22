#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int M,H;
	    cin>>M>>H;
	    int BMI = (M/(H*H));
	    int category;
	    if(BMI<=18){
	        category =1;
	    }
	    else if(BMI>=19 && BMI<=24){
	        category =2;
	    }
	    else if(BMI>=25 && BMI<=29){
	        category =3;
	    }
	    else{
	        category =4;
	    }
	    cout<<category<<endl;
	}
	return 0;
}
