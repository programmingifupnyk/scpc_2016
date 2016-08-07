#include <iostream>
#include <string>
using namespace std;

class catList{
public:
	string name;
	int count;
};

int main (){
	string a; catList cat[100]; int i=0;
	do {
		getline (cin, a);
		if (a[0] == '#'){
			i++;
			cat[i].name = a.erase (0,2);
			cat[i].count=0;
		} else if (a[0] != '!') {
			cat[i].count++;
		}
	} while (!(a[0] == '!'));

	getline(cin, a);
	string delimiter = " + ";
	int pos; string token; int result = 1;
	while ((pos = a.find(delimiter))!=string::npos) {
	    token = a.substr(0, pos);
		i=0;
		do {
			i++;
			if (i>100){
				i=1; break;
			}
		} while (!(cat[i].name==token));
		result *= cat[i].count;
	    a.erase(0, pos + delimiter.length());
	}

	i=0;
	do {
		i++;
		if (i>100){
			i=1; break;
		}
	} while (!(cat[i].name==token));

	result *= cat[i].count;
	cout << result << endl;
	return 0;
}