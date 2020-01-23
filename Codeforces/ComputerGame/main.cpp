/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 14, 2020, 9:12 PM
 * Purpose: https://codeforces.com/contest/1183/problem/C
 */

#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    ll n = 0LL, k = 0LL, a = 0LL, b = 0LL;
    
    scanf("%i", &q);
    
    for(int i = 0; i < q; ++i) {
        scanf("%lli%lli%lli%lli", &k, &n, &a, &b);
        k -= 1;
        
        if(k / b < n)//If it cannot be completed
            printf("-1\n");
        else
            printf("%lli\n", min((k - n * b) / (a - b), n));
    }
    //A Sebastian Production
    return 0;
}