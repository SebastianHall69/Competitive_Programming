/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 11, 2020, 12:39 AM
 * Purpose: http://codeforces.com/contest/1283/problem/B
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int t = 0, n = 0 , k = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        cin>>n>>k;
        cout<<((n / k) * k + min(k / 2, n % k))<<endl;
    }
    //A Sebastian Production
    return 0;
}