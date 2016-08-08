#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	for (int i=1;i<=N;i++){
		if ((i % 3)==0){
			cout << "Comp";
		}
		if ((i % 5)==0){
			cout << "Fest";
		}
		if ((i % 7)==0){
			cout << "Seven";
		}
		if (((i % 3)!=0) && ((i % 5)!=0) && ((i % 7)!=0)){
			cout << i;
		}
		if (i<N) {
			cout << " ";
		} else {
			cout << endl;
		}
	}
	return 0;
}