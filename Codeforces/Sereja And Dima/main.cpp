/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 8, 2020, 4:11 PM
 * Purpose: https://codeforces.com/problemset/problem/381/A
 */

#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    int n = 0, x = 0, s1 = 0, s2 = 0;
    deque<int> d;
    
    scanf("%i", &n);
    
    for(int i = 0; i < n; ++i) {
        scanf("%i", &x);
        d.push_back(x);
    }
    
    n /= 2;
    
    for(int i = 0; i < n; ++i) {
        if(d.front() > d.back()) {
            s1 += d.front();
            d.pop_front();
        } else {
            s1 += d.back();
            d.pop_back();
        }
        if(d.front() > d.back()) {
            s2 += d.front();
            d.pop_front();
        } else {
            s2 += d.back();
            d.pop_back();
        }
    }
    
    if(d.size() > 0)
        s1 += d.front();
    
    printf("%i %i\n", s1, s2);
    return 0;
}