/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 3:09 PM
 * Purpose: https://codeforces.com/problemset/problem/1218/F
 */

#include <bits/stdc++.h>
using namespace std;

typedef long  long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0LL, canLift = 0LL, base = 0LL, price = 0LL, *desired = nullptr, gains = 0LL, *cost = nullptr;
    priority_queue<ll, vector<ll>, greater<ll> > s;
    
    //Input
    cin>>n>>canLift;
    base = canLift;
    
    desired = new ll[n];
    cost = new ll[n];
    
    for(ll i = 0LL; i < n; ++i)
        cin>>desired[i];
    
    cin>>gains;
    
    for(ll i = 0LL; i < n; ++i)
        cin>>cost[i];
    
    //Calculate answer
    for(ll i = 0LL; i < n; ++i) {//For each day at gym
        //Add todays drink to options
        s.push(cost[i]);
        
        if(gains * (i + 1) + base < desired[i]) {//If it is impossible to lift that much
            price = -1;
            break;
        } else if(canLift < desired[i]) {//Can currently reach goal and want drink
            ll drinks = ceil((desired[i] - canLift + gains - 1) / gains);
            
            while(drinks > 0) {
                price += s.top();
                canLift += gains;
                s.pop();
                --drinks;
            }
        }
    }
    
    //Output answer
    cout<<price<<endl;
    
    //Deallocate memory
    delete [] desired;
    delete [] cost;
    
    //A Sebastian Production
    return 0;
}