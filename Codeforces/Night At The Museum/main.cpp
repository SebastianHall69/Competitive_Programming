/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 25, 2020, 7:10 PM
 * Purpose:
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int sum = 0;
    char c = 'a';
    string s;
    
    getline(cin, s);
    
    for(int i = 0; i < s.size(); ++i) {
        int dist = abs(s[i] - c);
        if(dist > 13) dist = abs(26 - dist);
        sum += dist;
        c = s[i];
    }
    
    cout<<sum<<endl;
    
    //A Sebastian Production
    return 0;
}