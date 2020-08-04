#include <iostream>
using namespace std;

int main() {
	int n = 0, a = 0, b = 0;

	cin>>n;
	for(int i = 0; i < n; ++i) {
		cin>>a>>b;
		a = (a % 2 == 1) ? a : a + 1;
		int sum = 0;
		while(a <= b) {
			sum += a;
			a += 2;
		}
		cout<<"Case "<<i+1<<": "<<sum<<endl;
	}
	return 0;
}
