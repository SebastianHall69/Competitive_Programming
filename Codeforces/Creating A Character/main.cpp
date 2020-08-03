/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 25, 2020, 11:24 PM
 * Purpose: https://codeforces.com/contest/1217/problem/A
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    //Declare variables
    int t = 0, str = 0, intl = 0, exp = 0;
    
    for(cin>>t; cin>>str>>intl>>exp, cout<<max(0, min((str + exp - intl + 1) / 2, exp + 1))<<endl, t > 1; --t)
    {
        
    }

    //A Sebastian Production
    return 0;
}