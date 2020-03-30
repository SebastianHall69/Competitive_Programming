/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 4:29 PM
 * Purpose: https://codeforces.com/contest/71/problem/A
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
    int t = 0;
    
    cin>>t;
    cin.ignore();
    
    for(int i = 0; i < t; ++i) {
        string str;
        getline(cin, str);
        
        if(str.size() > 10)
            cout<<str[0]<<str.size() - 2<<str[str.size() - 1]<<endl;
        else
            cout<<str<<endl;
    }

    //A Sebastian Production
    return 0;
}