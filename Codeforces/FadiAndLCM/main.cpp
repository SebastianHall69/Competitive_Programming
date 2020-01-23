/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 10, 2020, 7:48 AM
 * Purpose: https://codeforces.com/contest/1285/problem/C
 */

#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    ll lcm = 0LL, ans = 0LL;
    
    //Read in the number
    cin>>lcm;
    ans = lcm;
    
    for(ll i = 1; i * i <= lcm; ++i) {
        if(lcm % i == 0) {//If i is a factor of lcm
            ll b = lcm / i;//B is the number after factor i is removed
            if(__gcd(i, b) == 1) {//If i and b do not have a common divisor
                ans = min(ans, b);//Then take minimum of previous answer and b to get minimum factor
            }
        }
    }
    
    //Output answer
    cout<<ans<<" "<<lcm / ans;
    
    //A Sebastian Production
    return 0;
}
