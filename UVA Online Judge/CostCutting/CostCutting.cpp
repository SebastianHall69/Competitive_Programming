#include <iostream>
using namespace std;

int main() {
	int n;
	int x,y,z;
	cin>>n;
	for(int i = 1; i <= n; ++i) {
	cin>>x>>y>>z;
	cout<<"Case "<<i<<": "<<((x >= y && x <= z || x <= y && x >= z) ? x : (y >= x && y <= z || y <= x && y >= z) ? y : z)<<endl;

	}

	return 0;
}
