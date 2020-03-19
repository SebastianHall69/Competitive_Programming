/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 18, 2020, 4:20 PM
 * Purpose: https://codeforces.com/contest/1286/problem/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0, *arr = nullptr, numOdd = 0, numEven = 0;
    vector<int> oddGap, evenGap;
    
    //Read in
    cin>>n;
    arr = new int[n];
    numOdd = (n + 1) / 2;
    numEven = n / 2;
    
    //Read in array and count number of even and odds
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i] != 0) {
            if(arr[i] & 1)
                --numOdd;
            else
                --numEven;
        }
    }
    
    //Count number of zeroes at the beginning
    int lGap = 0, lPar = 0;
    while(arr[lGap] == 0 && (lGap + 1) < n) {++lGap;}
    lPar = arr[lGap] % 2;
    
    //Count gaps in the middle
    int dist = 0, parity = -1, ans = 0;
    for(int i = lGap; i < n; ++i) {
        
        if(arr[i] == 0) {
            ++dist;
        } else {
            if(parity != 0 && (arr[i] & 1)) {//Odd condition
                oddGap.push_back(dist);
                parity = 1;
            } else if(parity != 1 && (arr[i] % 2 == 0)) {
                evenGap.push_back(dist);
                parity = 0;
            } else {
                parity = arr[i] % 2;
                ++ans;
            }
            dist = 0;
        }
    }
    
    //Count gap dist at end
    int rGap = dist, rPar = parity;
    
    //Sort odd and even gap lengths
    sort(oddGap.begin(), oddGap.end());
    sort(evenGap.begin(), evenGap.end());
    
    //Odd gaps
    for(vector<int>::iterator itr = oddGap.begin(); itr < oddGap.end();) {
        if(numOdd >= *itr) {
            numOdd -= *itr;
            itr = oddGap.erase(itr);
        } else {
            ans += 2;
            ++itr;
        }
    }
    
    //Even gaps
    for(vector<int>::iterator itr = evenGap.begin(); itr < evenGap.end();) {
        if(numEven >= *itr) {
            numEven -= *itr;
            itr = evenGap.erase(itr);
        } else {
            ans += 2;
            ++itr;
        }
    }
    
    //First gap if array starts with 0's
    if(lGap > 0) {
        if(lPar == 1) {
            if(numOdd < lGap)
                ++ans;
            else
                numOdd -= lGap;
        }
        else if(lPar == 0) {
            if(numEven < lGap)
                ++ans;
            else
                numEven -= lGap;
        }
    }
    
    //Last gap if array ends with 0's
    if(rGap > 0) {
        if(rPar == 1) {
            if(numOdd < rGap)
                ++ans;
            else
                numOdd -= rGap;
        }
        else if(rPar == 0) {
            if(numEven < rGap)
                ++ans;
            else
                numEven -= rGap;
        }
    }
    
    //Output answer
    cout<<ans<<endl;
    
    //Deallocate space
    delete [] arr;
    
    //A Sebastian Production
    return 0;
}
