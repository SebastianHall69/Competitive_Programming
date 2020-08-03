/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 7:54 PM
 * Purpose: https://codeforces.com/contest/451/problem/B
 */

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

typedef long long ll;
typedef int longshort;

int main() {
    //Declare variables
    longshort n = 0;
    longshort start = 1, end = 1, count = 0;
    ll *arr;

    //Read in size and array
    cin>>n;
    arr = new ll[n];
    for(longshort i = 0; i < n; ++i)
        scanf("%lld", &arr[i]);

    if(!is_sorted(arr, arr + n)) {
        //Locate the indices of the first descending subsequence
        for(longshort i = 0; i < n; ++i) {
            if(i + 1 < n && arr[i] >= arr[i + 1]) {
                if(count == 0) start = i;
                ++count;
                end = i + 1;
            } else if(count > 0) {
                i = n;
            }
        }
        //Sort the descending part of array
        sort(arr + start, arr + end + 1);
        ++start;
        ++end;

        //Output results
        if(is_sorted(arr, arr + n))
            cout<<"yes\n"<<start<<" "<<end<<endl;
        else
            cout<<"no"<<endl;
    } else {
        cout<<"yes\n"<<"1 1\n";
    }

    //Delete array
    delete [] arr;

    return 0;
}

