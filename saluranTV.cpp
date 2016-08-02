#include <iostream>
using namespace std;

int main () {
	int T,X;string S;
	cin >> T;
	for (int i=0; i<T; i++){
		cin >> S;
		cin >> X;
		if (S=="next"){
			cout << (X-1+100) % 100 << endl;
		} else if (S=="prev"){
			cout << (X+1) % 100 << endl;
		}
	}
	return 0;
}