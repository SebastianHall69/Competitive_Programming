#ifndef UNIONFIND_H
#define UNIONFIND_H

#include <unordered_set>
#include <numeric>
using namespace std;

template<class T>
class UnionFind {
private:
    int m_size;
    unordered_set<T> roots;
    T *m_parent;
    T *m_count;
    
public:
    //Constructor
    UnionFind(T size) : m_size(size) {
        m_parent = new T[size];
        m_count = new T[size];
        iota(m_parent, m_parent + size, 0);//Set each vertex to be its own parent
        roots = unordered_set<T>(m_parent, m_parent + size);//Add all vertices to roots
        fill(m_count, m_count + size, 1);//Every set has one element at first
    }
    
    ~UnionFind() {
        delete [] m_parent;
        delete [] m_count;
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

#endif /* UNIONFIND_H */