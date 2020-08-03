/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 1:24 PM
 * Purpose: https://codeforces.com/contest/1304/problem/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int t = 0;
    
    scanf("%i", &t);
    
    for(int i = 0; i < t; ++i) {
        int x,y,a,b;
        
        scanf("%i%i%i%i", &x, &y, &a, &b);
        
        if((y - x) % (a + b) == 0)//If distance between them is divisible by distance travelled
            printf("%i\n", (y - x) / (a + b));//Then output time they meet
        else
            printf("-1\n");
    }

    //A Sebastian Production
    return 0;
}
