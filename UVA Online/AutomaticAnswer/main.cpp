#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int n = 0, x = 0;
    cin>>n;
    for(int i = 0; i <n; ++i) {
        cin>>x;
        string s = to_string((x*567/9+7492)*235/47-498);
        cout<<s[s.size()-2]<<endl;
    }
    return 0;
}