/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 21, 2020, 12:18 PM
 * Purpose: http://codeforces.com/gym/273163/problem/C
 */

#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int a,b,c;
    char arr [] = {'a', 'a', 'b', 'c', 'a', 'c', 'b'};
    
    cin>>a>>b>>c;
    
    int ans = min(a / 3, min(b / 2, c / 2));
    
    a -= ans * 3;
    b -= ans * 2;
    c -= ans * 2;
    ans *= 7;
    
    int rem = 0;
    
    
    for(int i = 0; i < 7; ++i) {//For each day of the week
        char food[7];
        memcpy(food, arr, 7);
        int tmp = 0, tmpa = a, tmpb = b, tmpc = c;
        for(int j = i; j < 7 + i; ++j) {
            if(food[j % 7] == 'a') {
                if(tmpa > 0) {
                    --tmpa;
                    ++tmp;
                } else
                    break;
            } else if(food[j % 7] == 'b') {
                if(tmpb > 0) {
                    --tmpb;
                    ++tmp;
                } else
                    break;

            } else if(food[j % 7] == 'c') {
                if(tmpc > 0) {
                    --tmpc;
                    ++tmp;
                } else
                    break;
            }
        }
        rem = max(rem, tmp);
    }
    
    cout<<ans + rem<<endl;
    
    //A Sebastian Production
    return 0;
}
