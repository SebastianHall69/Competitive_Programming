/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 1, 2020, 1:21 PM
 * Purpose: http://codeforces.com/contest/1176/problem/C
 */

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables    
    int n = 0, x = 0, count = 0, ans = 0;
    set<int> a, b, c, d, e, f;
    
    scanf("%i", &n);
    
    for(int i = 0; i < n; ++i) {
        scanf("%i", &x);
        if(x == 4) {
            a.insert(i);
        } else if(x == 8) {
            b.insert(i);
        } else if(x == 15) {
            c.insert(i);
        } else if(x == 16) {
            d.insert(i);
        } else if(x == 23) {
            e.insert(i);
        } else if(x == 42) {
            f.insert(i);
        }    
    }
    
    for(auto ita = a.begin(); ita != a.end(); ++ita) {
        auto itb = b.lower_bound(*ita);
        if(itb != b.end()) {
            auto itc = c.lower_bound(*itb);
            b.erase(itb);
            if(itc != c.end()) {
                auto itd = d.lower_bound(*itc);
                c.erase(itc);
                if(itd != d.end()) {
                    auto ite = e.lower_bound(*itd);
                    d.erase(itd);
                    if(ite != e.end()) {
                        auto itf = f.lower_bound(*ite);
                        e.erase(ite);
                        if(itf != f.end()) {
                            f.erase(itf);
                            ++count;
                        } else break;
                    } else break;
                } else break;
            } else break;
        } else break;
    }
    printf("%i\n", n - (count * 6));
    //A Sebastian Production
    return 0;
}