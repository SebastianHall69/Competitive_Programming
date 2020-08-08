/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 6:12 AM
 * Purpose: https://codeforces.com/contest/217/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

template<class T>
class UnionFind {
private:
    int m_size;//Number of vertices in set
    unordered_set<T> roots;//Set of all unique roots
    vector<T> m_parent;//Parent of each vertex
    vector<T> m_count;//Count of elements in each set, must access by root of set
    
public:
    //Constructor
    UnionFind(T size) : m_size(size) {
        m_parent.resize(size);
        iota(m_parent.begin(), m_parent.end(), static_cast<T>(0));//Set each vertex to be its own parent
        roots = unordered_set<T>(m_parent.begin(), m_parent.end());//Add all vertices to roots
        m_count = vector<T>(size, static_cast<T>(1));//Every set has one element at first
    }
    
    //Return number of vertices in union find
    T size() const {
        return m_size;
    }
    
    //Return number of unique sets in union find
    T numSets() const {
        return roots.size();
    }
    
    //Unite two vertices
    void unite(T x, T y) {
        x = find(x), y = find(y);
        if(x != y) {
            m_parent[y] = x;
            roots.erase(roots.find(y));
            m_count[x] += m_count[y];
        }
    }
    
    //Find parent of vertex
    T find(T x) {
        return m_parent[x] == x ? x : m_parent[x] = find(m_parent[x]);
    }
    
    //Returns the number of elements in set that contains x
    T setSize(T x) {
        return m_count[find(x)];
    }
};


int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0;
    
    cin>>n;
    
    //Create union find and arrays to represent visited columns / rows
    UnionFind<int> u(n);
    int x[1001], y[1001];
    fill(x, x + 1001, -1), fill(y, y + 1001, -1);
    
    //Go through each coordinate pair uniting them
    for(int i = 0; i < n; ++i) {
        int xPos = 0, yPos = 0;
        
        cin>>xPos>>yPos;
        
        //If previous values were found then unite them
        if(x[xPos] != -1) {
            u.unite(i, x[xPos]);
        }
        if(y[yPos] != -1) {
            u.unite(i, y[yPos]);
        }
        
        //Assign values to arrays
        x[xPos] = i;
        y[yPos] = i;
    }

    //Output answer
    cout<<(u.numSets() - 1)<<endl;

    //A Sebastian Production
    return 0;
}