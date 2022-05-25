#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long int A,B;
	    cin>>A>>B;
	    long long int sum=A+B;
	    long long int rem;
	    long long int count =0;
	    while(sum>0){
	        rem =sum%10;
	        sum =sum/10;
	        
	        if(rem == 0 || rem == 6 || rem == 9){
	            count+=6;
	        }
	        else if(rem == 2 || rem == 3 || rem == 5){
	            count+=5;
	        }
	        else if(rem == 1){
	            count+=2;
	        }
	        else if(rem == 7){
	            count+=3;
	        }
	        else if(rem == 4){
	            count+=4;
	        }
	        else{
	            count+=7;
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
