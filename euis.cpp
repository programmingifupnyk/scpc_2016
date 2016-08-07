#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int countEu(string s){
	int count=0;
	for (int i=0;i<s.size();i++){
		if ((s[i]=='e')&&(s[i+1]=='u')){
			count++;
		}
	}
	return count;
}
int countE(string s){
	int count=0;
	for (int i=0;i<s.size();i++){
		if ((s[i]=='e')&&(s[i+1]!='u')){
			count++;
		}
	}
	return count;
}

int main(){
	string str;
	getline(cin,str);
	if (str.length()<=1000){
		int eu = countEu(str);
		int e = countE(str);
		int total = (pow(3,eu) * pow (2,e));
		int modulo = 1000000007*(pow(10,9)+7);
		cout << total % modulo << endl;	
	}
	return 0;
}