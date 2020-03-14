/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:52 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/F
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long  n = 0LL;
    cin>>n;
    cout<<static_cast<long long>((-1 + sqrt(1+8*n))/2)<<endl;
    return 0;
}