/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 26, 2020, 11:26 AM
 * Purpose: http://codeforces.com/problemset/problem/791/A
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
    int a = 0, b = 0, answer = 0;
    
    //Read in weights of bears
    cin>>a>>b;
    
    //Count the number of years until the a weighs more than b
    while(a <= b) {
        a *= 3;
        b *= 2;
        answer++;
    }
    
    //Output answer
    cout<<answer<<endl;
    
    //A Sebastian Production
    return 0;
}