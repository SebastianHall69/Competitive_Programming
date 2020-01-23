/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 4, 2020, 8:14 PM
 * Purpose: http://codeforces.com/contest/977/problem/A
 */


#include <cstdio>
using namespace std;

int main() {
    int num = 0, n = 0;
    
    scanf("%d%d", &num, &n);
    
    for(int i = 0; i < n; ++i) {
        if(num % 10 == 0)
            num /= 10;
        else
            num -= 1;
    }
    
    printf("%d\n", num);
    
    return 0;
}
