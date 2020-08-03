/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 1:31 PM
 * Purpose: https://codeforces.com/contest/1304/problem/C
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
#include <valarray>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int n = 0, m = 0;
    queue<string> front;
    stack<string> back;
    vector<string> v;
    string mid;
    
    cin>>n>>m;
    cin.ignore();
    
    for(int i = 0; i < n; ++i) {
        string s;
        getline(cin, s, '\n');
        v.push_back(s);
    }
    
    for(int i = 0; i < v.size(); ++i) {
        for(int j = i; j < v.size(); ++j) {
            string tmp = v[j];
            reverse(tmp.begin(), tmp.end());
            if(tmp == v[i]) {
                if(i != j) {
                    front.push(v[i]);
                    back.push(v[j]);
                } else {
                    mid = v[j];
                }
                break;
            }
        }
    }
    
    string ans;
    ans.reserve(n * m);
    
    while(!front.empty()) {
        ans += front.front();
        front.pop();
    }
    ans += mid;
    while(!back.empty()) {
        ans += back.top();
        back.pop();
    }
    
    //Output results
    cout<<ans.size()<<endl<<ans<<endl;
    //A Sebastian Production
    return 0;
}