/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 14, 2020, 10:42 PM
 * Purpose: https://codeforces.com/contest/1183/problem/D
 */

#include <cstdio>
#include <functional>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0, n = 0, *arr, x = 0;
    
    scanf("%i", &q);
    
    for(int i = 0; i < q; ++i) {
        scanf("%i", &n);
        arr = new int [n];
        for(int j = 0; j < n; ++j)
            arr[j] = 0;
        
        
        for(int j = 0; j < n; ++j) {
            scanf("%i", &x);
            ++arr[x - 1];
        }
        
        sort(arr, arr + n, greater<int>());
        
        int high = n + 1;
        int sum = 0;
        for(int j = 0; j < n; ++j) {
            int val = min(high, arr[j]);
            sum += val;
            high = val - 1;
            if(high == 0 || (j + 1 < n && arr[j + 1] == 0)) j = n;
        }
        printf("%i\n", sum);
        
        delete [] arr;
    }

    //A Sebastian Production
    return 0;
}