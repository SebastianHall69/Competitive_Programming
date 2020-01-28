/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 11:43 AM
 * Purpose: http://codeforces.com/contest/1293/problem/B
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    double x = 0.0;
    int s = 0;
    scanf("%i", &s);
    for(int i = 1; i <= s; ++i)
        x += 1.0 / i;
    printf("%.12lf\n", x);
    //A Sebastian Production
    return 0;
}