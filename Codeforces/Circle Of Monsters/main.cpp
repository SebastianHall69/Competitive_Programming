/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 1, 2020, 11:38 AM
 * Purpose: https://codeforces.com/contest/1334/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t = 0;
    
    scanf("%lli", &t);
    
    for(ll i = 0; i < t; ++i) {
        //Declare variables
        ll n = 0, *a = nullptr, *b = nullptr, ans = 0;
        
        //Create arrays for monster health and damage
        scanf("%lli", &n);
        a = new ll[n];
        b = new ll[n];
        
        //Read in health and damage
        for(ll j = 0; j < n; ++j) scanf("%lli %lli", a + j, b + j);
        
        //Find most effective monster to start first
        ll low = 90000000000000, start = 0;
        for(ll j = 1; j <= n; ++j) {
            ll toKill = a[j % n];//How much it would cost to start on this one
            ll remFromBomb = max(toKill - b[j - 1], 0LL);//How much it would cost to start on another and bomb this one
            if(toKill - remFromBomb < low) {//Find lowest cost and save index
                low = toKill - remFromBomb;
                start = j % n;
            }
        }
        
        //Calculate the total damage
        for(ll j = 0; j < n; ++j) {
            ll next = (start + 1) % n;
            ans += a[start];//Take all remaining health from monster
            a[start] = 0;//Set monster health to 0
            a[next] -= min(b[start], a[next]);//Take blast damage from next monster
            start = next;//Increment to next
        }
        
        //Output the answer
        printf("%lli\n", ans);
        
        //Deallocate memory
        delete [] a;
        delete [] b;
    }
    //A Sebastian Production
    return 0;
}