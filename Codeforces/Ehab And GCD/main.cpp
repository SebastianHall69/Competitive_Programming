/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 4:31 PM
 * Purpose: https://codeforces.com/contest/1325/problem/A
 */

#include <cstdio>
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
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        int x = 0;
        cin>>x;
        cout<<1<<" "<<x - 1<<endl;//Because numbers are stupid
    }

    //A Sebastian Production
    return 0;
}