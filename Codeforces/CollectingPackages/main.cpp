/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 6:59 AM
 * Purpose: http://codeforces.com/contest/1294/problem/B
 */

#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, y = 0;
        set<pair<int, int>> s;
        
        cin>>n;
        
        for(int j = 0; j < n; ++j) {
            cin>>x>>y;
            s.insert(make_pair(x, y));
        }
        x = 0;
        y = 0;
        string ans;
        bool flag = true;
        for(set<pair<int, int>>::iterator itr = s.begin(); itr != s.end(); ++itr) {
            int a = (*itr).first;
            int b = (*itr).second;
            if(a < x || b < y) {
                cout<<"NO"<<endl;
                itr = s.end();
                --itr;
                flag = false;
            } else {
                a -= x;
                b -= y;
                if(a > 0 ) {
                    string aa(a, 'R');
                    ans.append(aa);
                }
                if(b > 0) {
                    string bb(b, 'U');
                    ans.append(bb);
                }
                x = a + x;
                y = b + y;
            } 
        }
        if(flag) {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}
