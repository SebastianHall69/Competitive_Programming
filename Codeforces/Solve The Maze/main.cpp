/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 8, 2020, 9:51 PM
 * Purpose: https://codeforces.com/contest/1365/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

bool dfs(pair<int, int> start, pair<int, int> end, char **arr); 

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Declare variables
        int n = 0, m = 0;
        char **arr = nullptr;
        bool ans = true;
        vector<pair<int, int> > pos;
        pair<int, int> end; 

        //Read in size of maze
        cin>>n>>m;
        
        //Create maze and visited array
        arr = new char*[n];
        for(int j = 0; j < n; ++j) arr[j] = new char[m];

        //Read in maze
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < m; ++k) {
                cin>>arr[j][k];
            }
        }

        //Parse maze
        for(int j = 0; j < n;  ++j) {
            for(int k = 0; k < m; ++k) {
                //If bad guy block all the way around him 
                if(arr[j][k] == 'B') {
                    //Up case
                    if(j - 1 >= 0) {
                        if(arr[j - 1][k] == 'G') {//If a good guy is touching a bad guy then instant loss
                            ans = false;
                            goto output;
                        } else if(arr[j - 1][k] == '.') {//Else mark open area as closed
                            arr[j - 1][k] = '#';
                        }
                    }
                    //Down case
                    if(j + 1 < n) {
                        if(arr[j + 1][k] == 'G') {//If a good guy is touching a bad guy then instant loss
                            ans = false;
                            goto output;
                        } else if(arr[j + 1][k] == '.') {//Else mark open area as closed
                            arr[j + 1][k] = '#';
                        }
                    }
                    //Left case
                    if(k - 1 >= 0) {
                        if(arr[j][k - 1] == 'G') {//If a good guy is touching a bad guy then instant loss
                            ans = false;
                            goto output;
                        } else if(arr[j][k - 1] == '.') {//Else mark open area as closed
                            arr[j][k - 1] = '#';
                        }
                    }
                    //Right
                    if(k + 1 < m) {
                        if(arr[j][k + 1] == 'G') {//If a good guy is touching a bad guy then instant loss
                            ans = false;
                            goto output;
                        } else if(arr[j][k + 1] == '.') {//Else mark open area as closed
                            arr[j][k + 1] = '#';
                        }
                    }
                }
               //If good guy save location 
                else if(arr[j][k] == 'G') {
                    if(!((j + 1 < n && arr[j + 1][k] == 'G') || (k + 1 < m && arr[j][k + 1] == 'G')))//Only push location if no good person connected to right or down of current good person, reduces time a lot
                        pos.push_back(make_pair(j, k));
                }
            }
        }

        //Do dfs on good people to see if they can all reach the end
        end = make_pair(n - 1, m - 1);
        for(pair<int, int> start : pos) {
            if(!dfs(start, end, arr)) {
                ans = false;
                break;
            }
        }

output:
        //Output answer
        cout<<(ans ? "Yes\n" : "No\n");

        //Deallocate memory
        for(int j = 0; j < n; ++j) delete [] arr[j];
        delete [] arr;
    }

    //A Sebastian Production
    return 0;
}

bool dfs(pair<int, int> start, pair<int, int> end, char **arr) {
    if(start == end) return true;

    //Declare variables
    stack<pair<int, int> > s;
    bool **visited, found = false;
    int n = end.first + 1, m = end.second + 1;

    //Fill out visited array
    visited = new bool*[n];
    for(int i = 0; i < n; ++i) {
        visited[i] = new bool[m];
        for(int j = 0; j < m; ++j) {
            visited[i][j] = (arr[i][j] == '#' ? true : false);//If wall then mark as visited
        }
    }

    //DFS while stack has somewhere to go
    s.push(start);
    while(!s.empty()) {
        //If reached end then return true
        if(s.top() == end) { found = true; break; }

        //Remove current and mark visited
        pair<int, int> cur = s.top();
        s.pop();
        int x = cur.first, y = cur.second;
        visited[x][y] = true;

        //Add neighbors
        if(x - 1 >= 0 && !visited[x - 1][y]) s.push(make_pair(x - 1, y));//Up
        if(y - 1 >= 0 && !visited[x][y - 1]) s.push(make_pair(x, y - 1));//Left
        if(y + 1 < m && !visited[x][y + 1]) s.push(make_pair(x, y + 1));//Right
        if(x + 1 < n && !visited[x + 1][y]) s.push(make_pair(x + 1, y));//Down
    }

    //Deallocate data
    for(int i = 0; i < n; ++i) delete [] visited[i];
    delete [] visited;
   
    //Return not found
    return found;
}
