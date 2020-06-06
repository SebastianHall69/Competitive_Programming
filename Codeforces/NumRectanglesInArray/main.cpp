/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 6, 2020, 1:47 PM
 * Purpose: Calculates the number of rectangles in an n by m matrix
 * 	    This isn't a problem from an online judge as far as I know
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    ll n = 50000, m = 50000;
    
    cout<<((n * (n + 1) / 2) * (m * (m + 1) / 2))<<endl;

    //A Sebastian Production
    return 0;
}