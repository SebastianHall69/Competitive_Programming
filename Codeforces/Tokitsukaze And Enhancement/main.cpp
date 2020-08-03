/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 5, 2020, 2:41 PM
 * Purpose: http://codeforces.com/contest/1191/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    
    scanf("%i", &n);
    
    if(n % 4 == 0)
        cout<<"1 A"<<endl;
    else if(n % 4 == 2)
        cout<<"1 B"<<endl;
    else if(n % 4 == 3)
        cout<<"2 A"<<endl;
    else
        cout<<"0 A"<<endl;

    //A Sebastian Production
    return 0;
}
