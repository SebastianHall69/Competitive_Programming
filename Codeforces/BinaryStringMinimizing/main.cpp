/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 15, 2020, 10:03 PM
 * Purpose: http://codeforces.com/contest/1256/problem/D
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;


typedef int longshort;
typedef long long ll;


int main(int argc, char** argv) {
    //Declare variables
    longshort q = 0;
    ll n = 0LL, k = 0LL, sum = 0LL;
    char *c;
    
    scanf("%i", &q);
    
    for(longshort i = 0; i < q; ++i) {
        ll index = -1LL;
        scanf("%lli%lli", &n, &k);
        cin.ignore();
        queue<ll> q;
        
        c = new char[n + 1];
        c[n] = '\0';
        
        for(ll j = 0; j < n; ++j) {
            scanf("%c", &c[j]);
            
            if(c[j] == '1') {
                q.push(j);
            } else {
                if(q.size() > 0) {
                    while(q.size() > 0 && j - q.front() > k) {
                        q.pop();
                    }
                    if(q.size() > 0) {
                        k -= j - q.front();
                        swap(c[j], c[q.front()]);
                        q.pop();
                        q.push(j);
                        if(k == 0) {
                            index = j + 1;
                            j = n;
                        }
                    }
                }
            }
        }
        
        if(index != -1)
            for(; index < n; ++index)
                scanf("%c", &c[index]);
        
        cout<<c<<endl;
        
        delete [] c;
    }
    //A Sebastian Production
    return 0;
}