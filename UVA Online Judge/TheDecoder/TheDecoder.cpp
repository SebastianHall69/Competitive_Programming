#include <iostream>
using namespace std;

int main() {
	string x;
	while(getline(cin, x)) {
		for(int i = 0; i < x.size(); ++i)cout<<static_cast<char>(x[i] - 7);
		cout<<endl;
	}
	return 0;
}
