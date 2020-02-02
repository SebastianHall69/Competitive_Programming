/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 1, 2020, 2:29 PM
 * Purpose: http://codeforces.com/contest/1176/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    scanf("%i", &q);
    
    for(int i = 0; i < q; ++i) {
        ll n = 0LL, ans = 0;
        scanf("%lli", &n);

        while(n % 2 == 0) {
            ++ans;
            n /= 2;
        }
        while(n % 3 == 0) {
            ans += 2;
            n /= 3;
        }
        while(n % 5 == 0) {
            ans += 3;
            n /= 5;
        }
        
        printf("%lli\n", (n > 1LL) ? -1LL : ans);
    }
    //A Sebastian Production
    return 0;
}