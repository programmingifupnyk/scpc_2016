#include <iostream>
#include <cmath>
using namespace std;

int invert(int a){
	int reverse =0;
    while(a != 0) {
        int remainder = a%10;
        reverse = reverse*10 + remainder;
        a/=10;
    }
	return reverse;
}

int main () {
	int T, N;
	cin >> T;
	for (int i=0;i<T;i++){
		cin >> N;
		if((N%2)==0){
			for ( int j=pow(10,((N / 2)-1));j<pow(10,((N / 2)));j++){
				cout << j*pow(10,((N / 2)))+invert(j) << endl;
			}
		} else {
			for ( int j=pow(10,((N / 2)-1));j<pow(10,((N / 2)));j++){
				for (int k=1;k<10;k++){
					cout << j*(pow(10,((N / 2)+1)))+k*(pow(10,(N / 2)))+invert(j) << endl;	
				}
			}
		}
	}
	return 0;
}


