/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 17, 2020, 11:29 AM
 * Purpose: http://codeforces.com/contest/1287/problem/A
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0, n = 0;
    char c;
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        int ans = 0, sum = 0;
        cin>>n;
        
        //Ignore any patient students with no angry students behind
        int j = 0;
        for(; j < n; ++j) {
            cin>>c;
            if(c == 'A') break;
        }
        
        //Find longest sequence of patient students
        for(j++;j < n; ++j) {
            cin>>c;
            
            if(c == 'A') sum = 0;
            else ++sum;
            ans = max(ans, sum);
        }
        
        //Output answer
        cout<<ans<<endl;
    }
    //A Sebastian Production
    return 0;
}