#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
    
    int T;
    cin >> T;
    while(T--)
    {
        float quantity, price;
        cin >> quantity >> price;
        if(quantity>1000)
        {
            cout << fixed << setprecision(6) << (quantity*price*0.9) << endl;
        }
        else 
            cout << fixed << setprecision(6) << (quantity*price) << endl;
    }
	return 0;
}
