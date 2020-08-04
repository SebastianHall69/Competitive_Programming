#include <iostream>
int main() {
	unsigned long a, b, c;
	while(std::cin>>a>>b) {
		if(a > b) {c=a;a=b;b=c;}
		std::cout<<b-a<<std::endl;
	}
}
