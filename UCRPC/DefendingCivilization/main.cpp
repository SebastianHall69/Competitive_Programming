/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 2:42 PM
 * Purpose: 
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int n, k;//Num divisions, num borders
    pair<int, int> *divs;
    vector<int> costs;
    
    
    cin>>n>>k;
    divs = new pair<int, int>[n];
    
    //Read in army divisions locations and costs, pair together
    for(int i = 0; i < n; ++i)
        cin>>divs[i].first;
    for(int i = 0; i < n; ++i)
        cin>>divs[i].second;
    
    //Sort first by location, second by movind cost
    sort(divs, divs + n);
    
    int count = 0;
    for(int i = 0; i < n - 1; ++i) {
        if(divs[i].first == divs[i + 1].first)//If both at same location
            costs.push_back(divs[i].second);
        else
            ++count;//Count how many divisions are already in place
    }
    
    //Change count to num that need to move
    count = k - count - 1;
    
    //Sorts costs to move ascending
    sort(costs.begin(), costs.end());
    
    ll sum = 0LL;
    for(int i = 0; i < count; ++i)
        sum += costs[i];
    
    cout<<sum<<endl;
    
    delete [] divs;
    //A Sebastian Production
    return 0;
}