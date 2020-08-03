/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:39 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/J
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    long long a, b, c, d;
    string ans = "NO";
    
    scanf("%lli%lli%lli%lli", &a, &b, &c, &d);
    
    char arr[] = {'+', '-', 'x'};
    
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            switch(arr[i]) {
                case '+': {
                    switch(arr[j]) {
                        case '-': {
                            if(a + b - c == d) ans = "YES";
                        }break;
                        case 'x': {
                            if(a + b * c == d) ans = "YES";
                        }break;
                    }
                };break;
                case '-': {
                    switch(arr[j]) {
                        case '+': {
                            if(a - b + c == d) ans = "YES";
                        }break;
                        case 'x': {
                            if(a - b * c == d) ans = "YES";
                        }break;
                    }
                };break;
                case 'x': {
                    switch(arr[j]) {
                        case '+': {
                            if(a * b + c == d) ans = "YES";
                        }break;
                        case '-': {
                            if(a * b - c == d) ans = "YES";
                        }break;
                    }
                }break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}