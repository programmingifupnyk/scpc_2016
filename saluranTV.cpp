#include <iostream>
using namespace std;

int main () {
	int T,X;string S;
	cin >> T;
	for (int i=0; i<T; i++){
		cin >> S;
		cin >> X;
		if (S=="next"){
			if (not(X==0)){
				cout << X-1 << endl; 	
			} else {
				cout << 99 << endl;
			}
		} else if (S=="prev"){
			if(not(X==99)){
				cout << X+1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}
}