#include <iostream>
#include <stdint.h>
using namespace std;

int main (){
	int T;uint64_t toni, tere;
	cin >> T;
	for (int i=0;i<T;i++){
		cin >> toni >> tere;
		if (toni>tere){
			if (toni-tere>=2){
				cout << "Toni" << endl;
			} else {
				cout << "Voting Ulang" << endl;
			}
		} else {
			if (tere-toni>=2){
				cout << "Tere" << endl;
			} else {
				cout << "Voting Ulang" << endl;
			}
		}
	}
	return 0;
}