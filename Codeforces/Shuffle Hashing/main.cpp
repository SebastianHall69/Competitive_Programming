/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 23, 2020, 10:54 PM
 * Purpose: http://codeforces.com/contest/1278/problem/A
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    
    cin>>n;
    cin.ignore();
    
    for(int i = 0; i < n; ++i) {
        string s, p;
        getline(cin, s);
        getline(cin, p);
        
        int diff = p.size() - s.size();
        sort(s.begin(), s.end());
        
        if(diff < 0) {
            cout<<"NO"<<endl;
        } else {
            bool flag = true;
            for(int i = 0; i <= diff; ++i) {
                string temp(p.begin() + i, p.begin() + i + s.size());
                sort(temp.begin(), temp.end());
                if(temp == s) {
                    cout<<"YES"<<endl;
                    i = diff;
                    flag = false;
                }
            }
            if(flag) cout<<"NO"<<endl;
        }   
    }
    //A Sebastian Production
    return 0;
}