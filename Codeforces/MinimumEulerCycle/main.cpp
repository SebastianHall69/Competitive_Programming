/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 1, 2020, 1:17 PM
 * Purpose: https://codeforces.com/contest/1334/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t = 0;
    
    scanf("%lli", &t);
    
    for(ll i = 0; i < t; ++i) {
        ll n = 0, l = 0, r = 0, baseVert = 0, loops = 0;
        
        scanf("%lli %lli %lli", &n, &l, &r);
        
        loops = r - l + 1;
        
        if(n * (n -1) + 1 != l) {//If segment of vertices is not only the last vertex possible which is always 1
            //Find base vertex
            ll sum = 0;
            do {
                sum += (n - ++baseVert) * 2;
            } while(sum < l);
            sum = max(0LL, sum -(n - baseVert) * 2);

            //Get next vertex
            ll nextVert = baseVert + (l - sum + 1) / 2;
            bool flag = ((l - sum + 1) % 2) ? false : true, inc = false, more = false;
            
            //Increment base if next is last and output first
            if(nextVert == n && !flag) {
                ++baseVert;
            }

            //Output the sequence
            while(loops--) {
                if(flag) {
                    if(baseVert == n) {
                        printf("1 ");
                        break;
                    }
                    printf("%lli ", baseVert);
                    if(nextVert == n) ++baseVert;
                } else {
                    printf("%lli ", nextVert);
                    ++nextVert;
                    if(nextVert > n) nextVert = baseVert + 1;
                }
                flag = !flag;
            }
            printf("\n");
        
        } else {
            printf("1\n");
        }
    }
    //A Sebastian Production
    return 0;
}