#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char ch;
	cin>>ch;
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
	    std::cout << "Vowel" << std::endl;
	}
	else{
	    std::cout << "Consonant" << std::endl;
	}
	return 0;
}
