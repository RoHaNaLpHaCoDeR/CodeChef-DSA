#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    // N
	    if(A>=B){
	        // N
	        if(A>=B+C){
	            // N
	            if(A>=B+C+D){
	                cout<<"N"<<endl;      
	            }
	            // S
	            else if(A<B+C+D){
	                cout<<"S"<<endl;
	            }
	        }
	        // S
	        else if(B+C>A){
	            // S
	            if(B+C>A+D){
	                cout<<"S"<<endl;
	            }
	            // N
	            else if(A+D>=B+C){
	                cout<<"N"<<endl;
	            }
	        }
	    }
	    // S
	    else if(A<B){
	        // N
	        if(A+C>=B){
	            // N
	            if(A+C>=B+D){
                    cout<<"N"<<endl;	                
	            }
	            // S
	            else if(B+D>A+C){
	                cout<<"S"<<endl;
	            }
	        }
	        // S
	        else if(B>A+C){
	            // S
                if(B>A+C+D){
                    cout<<"S"<<endl;
                } 
                // N
                else if(A+C+D>=B){
                    cout<<"N"<<endl;
                }
	        }
	    }
	}  
	return 0;
}
