/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 22, 2020, 9:13 PM
 * Purpose: https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for(int i = 0; i < n; ++i)
#define FORL(i, n) for(long long i = 0LL; i < n; ++i)

typedef long long ll;

void power(ll [][2], ll exp);
void mult(ll [][2], ll [][2]);

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
   
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        //Declare variables
        ll n = 0;
        
        //Define transformation matrix for recursive relation
        ll trans[2][2];
        FOR(j, 2) FOR(k, 2) trans[j][k] = (j == 0 && k == 0) ? 0 : 1;
        
        //Get number in sequence to find
        cin>>n;
        
        //Transform matrix
        power(trans, n - 1);
        
        //Calculate answer
        ll ans = trans[0][0] + 2 * trans[1][0];
        
        //Output answer
        cout<<ans<<endl;
    }
    
    
    //A Sebastian Production
    return 0;
}

void power(ll a[][2], ll exp) {
    ll ans[2][2] = {{1, 0}, {0, 1}};
    
    while(exp) {
        if(exp & 1) {
            mult(ans, a);
            --exp;
        } else {
            mult(a, a);
            exp /= 2;
        }
    }
    
    FOR(i, 2) FOR(j, 2) a[i][j] = ans[i][j];
}

void mult(ll a[][2], ll b[][2]) {
    ll ans[2][2];
    const ll MOD = (ll) 1e9 + 7;
    
    FOR(i, 2) {
        FOR(j, 2) {
            ans[i][j] = 0;
            FOR(k, 2) {
                ans[i][j] += ((a[i][k] % MOD) * (b[k][j] % MOD)) % MOD;
            }
            ans[i][j] %= MOD;
        }
    }
    
    FOR(i, 2) FOR(j, 2) a[i][j] = ans[i][j];
}