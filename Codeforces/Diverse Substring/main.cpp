/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 3:40 PM
 * Purpose: https://codeforces.com/contest/1073/problem/A
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
    int n = 0;
    string str;
    bool flag = true;
    
    cin>>n>>str;
    
    for(int i = 0; i < str.size() - 1; ++i) {
        if(str[i] != str[i + 1]) {
            cout<<"YES\n"<<str[i]<<str[i + 1]<<endl;
            flag = false;
            break;
        }
    }
    
    if(flag) cout<<"NO\n";

    //A Sebastian Production
    return 0;
}