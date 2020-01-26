/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 23, 2020, 11:28 PM
 * Purpose: http://codeforces.com/contest/1248/problem/B
 */

#include <cstdio>
#include <algorithm>
#include <numeric>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, *arr;
    ll vert = 0LL, hor = 0LL;
    
    scanf("%i", &n);
    arr = new int[n];
    
    for(int i = 0; i < n; ++i)
        scanf("%i", arr + i);
    
    sort(arr, arr + n);
    
    hor = accumulate(arr, arr + n / 2, 0);
    vert = accumulate( arr + n / 2, arr + n, 0);
    
    printf("%lli\n", (hor * hor) + (vert * vert));
    
    delete [] arr;

    //A Sebastian Production
    return 0;
}