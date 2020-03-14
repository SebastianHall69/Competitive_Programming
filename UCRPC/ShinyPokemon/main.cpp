/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 21, 2020, 9:14 PM
 * Purpose: 
 */

#include <iostream>
#include <queue>

using namespace std;

char *map;
bool *visited;
queue<int> q;
vector<vector<int> > list;

int search(int node);


int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;
    cin.tie(0);

    //Declare variables
    int n = 0, m = 0, numNodes = 0, start = 0;
    
    cin>>n;
    m = n;
    numNodes = m * n;
    
    //Create things
    list.resize(numNodes);
    map = new char[numNodes];
    visited = new bool[numNodes];
    
    //Read in map
    for(int i = 0, numNodes = m * n; i < numNodes; ++i) {
        cin>>map[i];
        if(map[i] == 'd') start = i;
    }
    
    //Construct adjacency list
    for(int i = 0, numNodes = n * m; i < numNodes; ++i) {
        if(i - n >= 0 && map[i - n] != 't') list[i].push_back(i - m);//Connected to element above
        if((i % m) - 1 >= 0 && map[i - 1] != 't') list[i].push_back(i - 1);//Connected to element to the left
        if((i % m) + 1 < n && map[i + 1] != 't') list[i].push_back(i + 1);//Connected to element to the right
        if(i + n < numNodes && map[i + n] != 't') list[i].push_back(i + m);//Connected to element below
    }
    
    //Output adjacency list
//    for(int i = 0; i < list.size(); ++i) {
//        cout<<i<<": ";
//        for(int j = 0; j < list[i].size(); ++j) {
//            cout<<list[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    int ans = search(start);
    if(ans > -1)
        cout<<"Yes: "<<ans<<endl;
    else
        cout<<"No: "<<ans<<endl;
    
    
    
    //Delete stuff
    delete [] map;
    delete [] visited;

    //A Sebastian Production
    return 0;
}

int search(int node) {
    bool reached_end = false;
    q.push(node);
    
    //For each node on queue
    int moveCount = 0;
    while(q.size() > 0) {
        int cur = q.front();
        q.pop();
        if(!visited[cur]) {
            visited[cur] = true;
            if(map[cur] == 's') {
                reached_end = true;
                break;
            }
            
            for(int i = 0; i < list[cur].size(); ++i) {
                int x = list[cur][i];
                if(!visited[x]) {
                    q.push(x);
                }
            }
            ++moveCount;
        }
    }
    if(reached_end) return moveCount;
    else return -1;
}


/*
 int cur = q.front();
        q.pop();
        if(!visited[cur]) {
            visited[cur] = true;
            if(map[cur] == 's') {
                reached_end = true;
                break;
            }

            for(int i = 0; i < list[cur].size(); ++i) {
                if(!visited[list[cur][i]])
                    q.push(list[cur][i]);
            }
            ++moveCount;
        }
 
 */