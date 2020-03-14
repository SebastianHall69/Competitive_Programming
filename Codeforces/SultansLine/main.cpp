/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:24 PM
 * Purpose: private group question https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/L
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int x[3], y[3];
    
    cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
    
    if(x[0]*y[1] + y[0]*x[2] + x[1]*y[2] - x[2]*y[1] - y[2]*x[0] - x[1]*y[0] == 0) cout<<"Yes\n";
    else cout<<"No\n";
    
    return 0;
}