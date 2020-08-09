/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 10:37 PM
 * Purpose: https://codeforces.com/contest/1237/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, x = 0, ans = 0;
    queue<int> enter;
    set<int> bad;
    
    //Read initial ordering
    cin>>n;
    for(int i = 0; i < n; ++i) { cin>>x; enter.push(x); }
    
    //Read in final ordering
    for(int i = 0; i < n; ++i) { 
        cin>>x;
        
        //If front of line is already seen speeding then ignore, he won't be in correct place already
        while(bad.count(enter.front())) {
            enter.pop();
        }
        
        //If person at front is in correct position then do nothing, just remove from queue
        if(x == enter.front()) {
            enter.pop();
        } else {//Else put the speeder into the set
            bad.insert(x);
        }
    }
    
    //Output answer, size of set because it holds all speeders
    cout<<bad.size()<<endl;

    //A Sebastian Production
    return 0;
}