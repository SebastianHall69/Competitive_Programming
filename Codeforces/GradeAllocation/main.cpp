/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 22, 2020, 10:39 PM
 * Purpose: https://codeforces.com/contest/1316/problem/A
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
        int n = 0, m = 0, x = 0, ans = 0;
        
        cin>>n>>m;
        
        for(int j = 0; j < n; ++j){
            cin>>x;
            ans += x;
        }
        
        cout<<min(m, ans)<<endl;
    }

    //A Sebastian Production
    return 0;
}
