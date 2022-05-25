#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    A[0] = 0;
	    for(int i=1;i<=N;i++){
	        cin>>A[i];
	    }
	    int B[N];
	    for(int j=1;j<=N;j++){
	        cin>>B[j];
	    }
	    int count = 0;
	    for(int k=1;k<=N;k++){
	        if((A[k]-A[k-1])>=B[k]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
