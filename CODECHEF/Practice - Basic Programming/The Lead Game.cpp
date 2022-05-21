#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int W,L;
	int Max_W=0,Max_L=0;
	int sum_1 = 0;
	int sum_2 = 0;
	for(int i=1;i<=N;i++){
	    int S_i,T_i;
	    cin>>S_i>>T_i;
	    sum_1+=S_i;
	    sum_2+=T_i;
	    if(sum_1>sum_2){
	        W=1;
	        L=sum_1-sum_2;
	    }
	    else{
	        W=2;
	        L=sum_2-sum_1;
	    }
	    
	    if(Max_L<L){
	        Max_L = L;
	        Max_W = W;
	    }
	}
	cout<<Max_W<<" "<<Max_L;
	return 0;
}
