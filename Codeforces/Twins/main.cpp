/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 4, 2020, 8:14 PM
 * Purpose: http://codeforces.com/problemset/problem/160/A
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, twin1 = 0, twin2 = 0, count = 0, *arr;
    
    //Read in num coins and coin array
    cin>>n;
    arr = new int[n];
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    
    //Sort coins descending
    sort(arr, arr + n, greater<int>());
    
    
    //Give all coins to twin 2
    for(int i = 0; i < n; ++i) {
        twin2 += arr[i];
    }
    
    //While twin2 has more money give twin 1 a coin
    while(twin2 >= twin1) {
        twin1 += arr[count];//Give twin1 coin
        twin2 -= arr[count++];//Take coin away from twin2 and increment count
    }
    
    //Output num coins
    cout<<count<<endl;
    
    //Delete coin array
    delete [] arr;

    //A Sebastian Production
    return 0;
}