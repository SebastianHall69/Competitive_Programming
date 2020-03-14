/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on February 8, 2020, 8:13 PM
 * Purpose: https://codeforces.com/contest/1077/problem/B
 */

#include <stdio.h>
#include <bitset>
using namespace std;


int main(int argc, char** argv) {
    int n = 0, x = 0, cnt = 0;
    
    scanf("%i", &n);
    bitset<100> b;
    
    for(int i = 0; i < n; ++i) {
        scanf("%i", &x);
        b[i] = x;
    }
    
    for(int i = 1; i < n - 1; ++i) {
        if(b[i - 1] == 1 && b[i] == 0 && b[i + 1] == 1) { 
            ++cnt;
            b[i + 1] = 0;
        }
    }
    
    printf("%i\n", cnt);
    //A Sebastian Production
    return 0;
}