/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:35 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/M
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    long double r, s;
    
    scanf("%Lf%Lf", &r, &s);
    
    if(r * 2 <= s) {
        cout<<"Square"<<endl;
    } else if(r >= sqrt((s / 2.0) * (s / 2.0) + (s / 2.0) * (s / 2.0))) {
        cout<<"Circle"<<endl;
    } else {
        cout<<"Complex"<<endl;
    }
    return 0;
}