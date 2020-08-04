/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 3, 2020, 2:03 PM
 * Purpose: https://codeforces.com/contest/1217/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    //Each query
    cin>>t;
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, d = 0, h = 0, prog = -1, oneHit = -1, ans = -1;
        
        //Read input, heads, blows, and blow info
        cin>>n>>x;
        for(int j = 0; j < n; ++j) {
            cin>>d>>h;
            prog = max(prog, d - h);//Highest number of heads that will be removed after they go back
            oneHit = max(oneHit, d);//Get highest can be done in one hit
        }
        
        //Determine answer
        if(prog < 1 && oneHit < x) ans = -1;//Cannot kill in one hit, cannot kill more heads than grow back so cannot kill at all
        else if(oneHit >= x) ans = 1;//Can kill in one hit
        else {
            int dist = max(0, x - oneHit);//Find out how many progress hits need to take place before a one hit kill
            ans = (dist + prog - 1) / prog;//Ceiling of hits to reach one shot range
            x = max(0, x - ans * prog);//Remove hits from head
            if(x) ++ans;//If any remaining then apply one shot
        }
        
        //Output answer
        cout<<ans<<endl;
    }

    //A Sebastian Production
    return 0;
}