/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 1:54 PM
 * Purpose: 
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <utility>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int n = 0, q = 0;//Number of dungeons, number of queries
    set< pair<ll, string> > s;//Set of dungeons ordered first by level
    
    cin>>n;
    
    //Read in dungeons
    for(int i = 0; i < n; ++i) {
        string line;
        ll lvl;
        cin>>line>>lvl;
        cin.ignore();
        s.insert(make_pair(lvl, line));//Add dungeons to set
    }
    
    //Read in number of queries
    cin>>q;
    
    //Read in queries
    for(int i = 0; i < q; ++i) {
        ll lvl = 0LL;//Players current level
        cin>>lvl;
        
        //Find first dungeon equal to or greater than lvl
        set< pair<ll, string> >::iterator itr = s.lower_bound(make_pair(lvl, ""));
        
        //Output results
        if(itr == s.begin()) {//If first dungeon is >= lvl
            if(itr->first == lvl)
                cout<<itr->second<<endl;
            else
                cout<<"none"<<endl;
        } else if(itr == s.end()) {//Every dungeon is available
            --itr;
            cout<<itr->second<<endl;
        } else {
            if(itr->first > lvl)
                --itr;
            cout<<itr->second<<endl;
        }
    }
    //A Sebastian Production
    return 0;
}