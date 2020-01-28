/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 25, 2020, 6:21 PM
 * Purpose: https://codeforces.com/problemset/problem/492/B
 */

#include <iostream>
#include <algorithm>
using namespace std;

typedef long double triple;
typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    long long n = 0LL, l = 0LL;
    triple dist = 0LL;
    triple *arr;
    
    scanf("%lli%lli", &n, &l);
    arr = new triple[n];
    
    //Read in lamps
    for(ll i = 0; i < n; ++i)
        scanf("%Lf", &arr[i]);
    
    //Sort lamps
    sort(arr, arr + n);
    
    //Find max radius between lamps
    for(long long i = 0; i < n - 1; ++i) {
        dist = max(dist, (arr[i + 1] - arr[i]) / 2.0);
    }
    
    //Do cases for end of streets
    dist = max(dist, arr[0]);
    dist = max(dist, l - arr[n - 1]);
    
    //Output results
    printf("%.10Lf\n", dist);
    
    delete [] arr;
    //A Sebastian Production
    return 0;
}