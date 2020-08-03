/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 5, 2020, 3:00 PM
 * Purpose: http://codeforces.com/contest/1191/problem/B
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
typedef long double triple;


/*

 #     #     #     #     #  ###  #     #  #     #  #     # 
 ##   ##    # #     #   #    #   ##   ##  #     #  ##   ## 
 # # # #   #   #     # #     #   # # # #  #     #  # # # # 
 #  #  #  #     #     #      #   #  #  #  #     #  #  #  # 
 #     #  #######    # #     #   #     #  #     #  #     # 
 #     #  #     #   #   #    #   #     #  #     #  #     # 
 #     #  #     #  #     #  ###  #     #   #####   #     # 
                                                           
 ######   ######   #     #  #######  ####### 
 #     #  #     #  #     #     #     #       
 #     #  #     #  #     #     #     #       
 ######   ######   #     #     #     #####   
 #     #  #   #    #     #     #     #       
 #     #  #    #   #     #     #     #       
 ######   #     #   #####      #     ####### 
                                             
 #######  #######  ######    #####   ####### 
 #        #     #  #     #  #     #  #       
 #        #     #  #     #  #        #       
 #####    #     #  ######   #        #####   
 #        #     #  #   #    #        #       
 #        #     #  #    #   #     #  #       
 #        #######  #     #   #####   ####### 

 */


int main(int argc, char** argv) {
    //Declare variables
    string c1, c2, c3;
    vector< vector<string> > v;
    int ans = 3;
    
    //Read in cards
    cin>>c1>>c2>>c3;
    
    //Create all possible koutsu
    for(int i = 1; i <= 9; ++i) {
        vector<string> m(3), p(3), s(3);
        m[0] = m[1] = m[2] = to_string(i) + "m";
        s[0] = s[1] = s[2] = to_string(i) + "s";
        p[0] = p[1] = p[2] = to_string(i) + "p";
        v.push_back(m);
        v.push_back(s);
        v.push_back(p);
    }
    
    //Create all possible shuntsu
    for(int i = 1; i < 8; ++i) {
        vector<string> m(3), p(3), s(3);
        m[0] = to_string(i) + "m";
        m[1] = to_string(i + 1) + "m";
        m[2] = to_string(i + 2) + "m";
        s[0] = to_string(i) + "s";
        s[1] = to_string(i + 1) + "s";
        s[2] = to_string(i + 2) + "s";
        p[0] = to_string(i) + "p";
        p[1] = to_string(i + 1) + "p";
        p[2] = to_string(i + 2) + "p";
        v.push_back(m);
        v.push_back(s);
        v.push_back(p);
    }
    
    //Search each possible solution for min cards needed to win
    for(int i = 0; i < v.size(); ++i) {
        int cards = 3;
        if(count(v[i].begin(), v[i].end(), c1)) {
            --cards;
            v[i].erase(find(v[i].begin(), v[i].end(), c1));
        }
        if(count(v[i].begin(), v[i].end(), c2)) {
            --cards;
            v[i].erase(find(v[i].begin(), v[i].end(), c2));
        }
        if(count(v[i].begin(), v[i].end(), c3)) {
            --cards;
            v[i].erase(find(v[i].begin(), v[i].end(), c3));
        }
        
        ans = min(ans, cards);
    }
    
    //Output the answer
    cout<<ans<<endl;
    
    //A Sebastian Production
    return 0;
}
