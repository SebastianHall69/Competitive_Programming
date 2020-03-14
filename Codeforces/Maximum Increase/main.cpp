/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 12:57 PM
 * Purpose: https://codeforces.com/problemset/problem/702/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int n = 0, a = 0, b = 0, cur = 1, high = 0;
    
    scanf("%i%i", &n, &a);
    
    for(int i = 1; i < n; ++i) {
        cin>>b;
        if(b > a)
            ++cur;
        else {
            high = max(high, cur);
            cur = 1;
        }
        
        a = b;
    }
    
    high = max(high, cur);
    
    printf("%i\n", high);

    //A Sebastian Production
    return 0;
}