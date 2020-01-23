/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 10, 2020, 7:57 PM
 * Purpose: http://codeforces.com/contest/479/problem/C
 */

#include <iostream>
#include <set>
#include <utility>
using namespace std;

typedef multiset<pair<int, int>> ms;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, a = 0, b =0;
    int end = 0;
    ms s;
    
    cin>>n;
    
    //Insert the date pairs into multiset to sort from earliest day to latest
    for(int i = 0; i < n; ++i) {
        cin>>a>>b;
        s.insert(make_pair(a, b));
    }
    
    //Set end date as the earliest possible data
    end = s.begin()->second;
    for(ms::iterator i = s.begin(); i != s.end(); ++i) {
        if(i->second < end) {
            end = i->first;
        } else {
            end = max(i->second, end);
        }
    }
    //Output results
    cout<<end<<endl;
    //A Sebastian Production
    return 0;
}