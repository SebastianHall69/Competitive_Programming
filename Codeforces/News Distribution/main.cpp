/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 2:25 AM
 * Purpose: https://codeforces.com/problemset/problem/1167/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//Global variables
int *par;
int *cnt;

//Union find functions
int find(int x) {
    return par[x] == x ? x : par[x] = find(par[x]);//If parent of itself then return itself, else return its parent and compress path
}
void unite(int x, int y) {
    //Find both parents
    x = find(x), y = find(y);
    
    //If they do not already belong to the same set
    if(x != y) {
        par[y] = x;//Unite them, make x parent of y
        cnt[x] += cnt[y];//Add size of y to x as it is the new parent of both
    }
}


int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, m = 0;
    
    //Read size input
    cin>>n>>m;
    
    //Create parent array and count array
    par = new int[n], cnt = new int[n];
    iota(par, par + n, 0);//Each node is its own parent
    fill(cnt, cnt + n, 1);//Each is in set of size 1, on their own
    
    //Read in each friend group and create dsu
    for(int i = 0; i < m; ++i) {
        int k = 0;
        
        cin>>k;
        
        //If two or more people to unite
        if(k > 1) {
            int x = 0, y = 0;
            cin>>x;                             //Read initial to unite
            --x;                                //Zero indexed
            for(int j = 1; j < k; ++j) {        //For remaining friends
                cin>>y;                         //Read in person to unite with previous person
                unite(x, --y);                  //Unite them, zero index y
                x = y;                          //Assign current to previous
            }
        }
        //Else zero or one person
        else {
            if(k) cin>>k;//If one person just read in number, no change in parent
        }
    }
    
    //For each person output the size of their set / friend group
    for(int i = 0; i < n; ++i) {
        cout<<cnt[find(i)]<<" ";
    }

    //Deallocate data
    delete [] par;
    delete [] cnt;
    
    //A Sebastian Production
    return 0;
}