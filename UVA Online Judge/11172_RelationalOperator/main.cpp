//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=23&page=show_problem&problem=2113

#include <iostream>
using namespace std;

int main() {
    int n = 0, a = 0, b = 0;

    cin>>n;

    while(n--) {
        cin>>a>>b;
        if(a < b) cout<<"<\n";
        else if(a == b) cout<<"=\n";
        else cout<<">\n";
    }
}
