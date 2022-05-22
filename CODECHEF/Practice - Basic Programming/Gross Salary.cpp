#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	cout.precision(2);
	while(T--){
	    int SALARY;
	    cin>>SALARY;
	    float HRA = 0.0f;
	    float DA = 0.0f;
	    float GROSS_SALARY = 0.0f;
	    if (SALARY<1500){
	        HRA = 0.1*SALARY;
	        DA = 0.9*SALARY;
	    }
	    else{
	        HRA = 500.0f;
	        DA = 0.98*SALARY;
	    }
	    GROSS_SALARY = SALARY + HRA + DA;
	    cout<<fixed<<GROSS_SALARY<<endl;
	}
	return 0;
}
