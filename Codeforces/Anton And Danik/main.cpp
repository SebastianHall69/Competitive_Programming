/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 8:51 PM
 * Purpose: https://codeforces.com/contest/734/problem/A
 */

#include <iostream>
using namespace std;

int main() {
    int a = 0, d = 0, n = 0;
    char c;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        cin>>c;
        if(c == 'A' || c =='a') {
            ++a;
        } else {
            ++d;
        }
    }
    if(a > d) {
        cout<<"Anton"<<endl;
    } else if(d > a) {
        cout<<"Danik"<<endl;
    } else {
        cout<<"Friendship"<<endl;
    }

    return 0;
}