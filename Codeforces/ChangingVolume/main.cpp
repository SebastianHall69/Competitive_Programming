/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 3:46 PM
 * Purpose: https://codeforces.com/contest/1255/problem/A
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
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int a = 0, b = 0, ans = 0;
        
        //Read in sizes
        cin>>a>>b;
        
        //Get distance between them
        a = abs(a - b);
        
        //Take optimal steps, works because of numbers chosen
        ans += a / 5;
        a %= 5;
        ans += a / 2;
        a %= 2;
        ans += a;
        
        //Output answer
        cout<<ans<<endl;
    }
    //A Sebastian Production
    return 0;
}