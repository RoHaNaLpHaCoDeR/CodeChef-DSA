#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,A,B;
	    cin>>N>>A>>B;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    // for first toss
	    int count_A = 0;
	    for(int j=0;j<N;j++){
	        if(A==arr[j]){
	            count_A+=1;
	        }
	    }
	    
	    int count_B = 0;
	    for(int k=0;k<N;k++){
	        if(B==arr[k]){
	            count_B+=1;
	        }
	    }
	   // cout<<count_A<<" "<<count_B<<endl;
	    float Total_prob = 1.0*((float)count_A/N * (float)count_B/N);
	    cout<<fixed<<setprecision(10)<<Total_prob<<endl;
	}
	return 0;
}
