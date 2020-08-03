/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 25, 2020, 12:49 PM
 * Purpose: https://codeforces.com/problemset/problem/1272/C
 */

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    long long n = 0, k = 0, count = 0;
    long long ans = 0;
    char *s1, c;
    set<char> s;
    
    cin>>n>>k;
    cin.ignore();
    s1 = new char[n];
    
    for(int i = 0; i < n; ++i) 
        cin>>s1[i];
    
    for(int i = 0; i < k; ++i) {
        cin>>c;
        s.insert(c);
    }
    
    for(int i = 0; i < n; ++i) {
        if(s.find(s1[i]) != s.end()) {
            ++count;
        } else {
            ans += count * (count + 1) / 2;
            count = 0;
        }
    }
    
    if(count > 0) ans += count * (count + 1) / 2;
    
    cout<<ans<<endl;
    
    delete [] s1;
    //A Sebastian Production
    return 0;
}