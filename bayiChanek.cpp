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

int countFactor(int num){
	int result=0;
	for (int i=1;i<=sqrt(num);i++){
		if ((num%i)==0) {
			result++;
		}
	}
	return result;
}

int main () {
	int T, N;
	long int Z;
	long int count=0;
	cin >> T;
	for (int i=0;i<T;i++){
		cin >> N;
		if((N%2)==0){
			for ( int j=pow(10,((N / 2)-1));j<pow(10,((N / 2)));j++){
				Z=j*pow(10,((N / 2)))+invert(j);
				count+=countFactor(Z);
			}
		} else {
			for ( int j=pow(10,((N / 2)-1));j<pow(10,((N / 2)));j++){
				for (int k=1;k<10;k++){
					Z=j*(pow(10,((N / 2)+1)))+k*(pow(10,(N / 2)))+invert(j);
					count+=countFactor(Z);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}


