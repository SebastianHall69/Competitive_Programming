/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 11, 2020, 12:04 PM
 * Purpose: https://codeforces.com/problemset/problem/1221/A
 */

#include <iostream>
using namespace std;

int main() {
    //Declare variables
    int n = 0, a = 0;
    
    cin>>n;
    for(int i = 0; i < n; ++i) {
        int size = 0, sum = 0;
        cin>>size;
        
        for(int j = 0; j < size; ++j) {
            cin>>a;
            if(a <= 2048) {
                sum += a;
            }
        }
        if(sum >= 2048) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    //A Sebastian Production
    return 0;
}
