/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 11, 2020, 2:27 PM
 * Purpose: https://codeforces.com/problemset/problem/1207/A
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, b = 0, p = 0, f = 0, h = 0, c = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        int price = 0;
        int cMade = 0, hMade = 0;
        cin>>b>>p>>f>>h>>c;
        
        if(c >= h) {
            cMade = min(f, b / 2);
            b -= 2 * cMade;
            hMade = min(p, b / 2);
        } else {
            hMade = min(p, b / 2);
            b -= 2 * hMade;
            cMade = min(f, b / 2);
        }
        
        price = c * cMade + h * hMade;
        cout<<price<<endl;
    }
    return 0;
}
