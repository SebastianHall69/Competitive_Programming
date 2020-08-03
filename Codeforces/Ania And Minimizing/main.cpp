/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 2:58 PM
 * Purpose: https://codeforces.com/contest/1230/problem/B
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
    int n = 0, k = 0;
    string str;
    
    cin>>n>>k>>str;
    
    //Handle first character
    if(k > 0) {
        if(n == 1) {
            str[0] = '0';
            --k;
        }
        else if(str[0] != '1') {
            str[0] = '1';
            --k;
        }
        
    }
    
    //Handle remaining characters
    for(int i = 1; i < n;  ++i) {
        if(k == 0) break;
        if(str[i] != '0') {
            --k;
            str[i] = '0';
        }
    }
    
    //Output
    cout<<str<<endl;

    //A Sebastian Production
    return 0;
}