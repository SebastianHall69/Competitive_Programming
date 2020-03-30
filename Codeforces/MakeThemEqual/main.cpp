/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 21, 2020, 12:03 PM
 * Purpose: http://codeforces.com/gym/273163/problem/B
 */

#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0;
    
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    
    sort(arr, arr + n);
    bool flag = true;
    int dist = 0;
    if(arr[0] % 2 == arr[n-1] % 2) {
        dist = (arr[n - 1] - arr[0]) / 2;
        int mid = arr[0] + dist;
        
        for(int i = 0; i < n; ++i) {
            if(arr[i] < mid) {
                if(arr[i] + dist > mid)
                    flag = false;
            } else if(arr[i] > mid) {
                if(arr[i] - dist < mid)
                    flag = false;
            }
        }
    } else {
        dist = arr[n-1] - arr[0];
        for(int i = 0; i < n; ++i) {
            if(arr[i] < arr[n - 1]) {
                if(arr[i] + dist > arr[n-1]) {
                    flag = false;
                }
            }
        }
    }
    
    if(flag) {
        cout<<dist<<endl;
    } else {
        cout<<-1<<endl;
    }
    
    delete [] arr;

    //A Sebastian Production
    return 0;
}
