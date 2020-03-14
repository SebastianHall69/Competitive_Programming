/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 12, 2020, 5:19 PM
 * Purpose: https://codeforces.com/contest/1303/problem/B
 */

#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Read in num test cases
    int t = 0;
    scanf("%i", &t);
    
    //Loop for each case
    for(int i = 0; i < t; ++i) {
        ll n = 0LL, g = 0LL, b = 0LL, req = 0LL, ans = 0LL;
        
        //Read in num good and bad days
        scanf("%lli%lli%lli", &n, &g, &b);
        
        //Get required number of high quality segments
        req = (n + 1) / 2;
        
        //Get number of full sections of good days required
        req /= g;
        
        //Add num days required to get
        ans = req * g + max(req - 1LL, 0LL) * b;
        
        n -= ans;
        
        if(n > 0) ans += n;
        
        printf("%lli\n", ans);
        
    }
    return 0;
}

