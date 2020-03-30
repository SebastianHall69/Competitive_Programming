/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 25, 2020, 1:49 PM
 * Purpose: http://codeforces.com/contest/1005/problem/B
 */

#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    string a, b;
    
    getline(cin, a);
    getline(cin, b);
    
    int count = 0;
    for(string::reverse_iterator ai = a.rbegin(), bi = b.rbegin(); ai != a.rend(), bi != b.rend(); ++ai, ++bi) {
        if(*ai == *bi) ++count;
        else break;
    }
    
    cout<<a.size() + b.size() - count * 2<<endl;

    //A Sebastian Production
    return 0;
}
