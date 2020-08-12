#ifndef SEGMENTTREEMIN_H
#define SEGMENTTREEMIN_H

#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;

template<class T>
class SegmentTreeMin {
private:
    //Fields
    T *m_tree, *m_data;
    long m_len, m_size;
    
    
    long parent(long ind) { return ind >> 1; }
    long left(long ind) { return ind << 1L; }
    long right(long ind) { return (ind << 1L) + 1; }
    long mid(long l, long r) { return l + (r - l) / 2;}
    
    //Recursive functions to build, lookup, and modify segment tree
    T build(long ind, long l, long r) {
        if(l == r) {
            return m_tree[ind] = m_data[l];
        } else {
            //Return min of child nodes
            return m_tree[ind] = min(build(left(ind), l, mid(l, r)), build(right(ind), mid(l, r) + 1, r));
        }
    }
    T minimum(long ind, long l, long r, long i, long j) {
        //If in range
        if(i <= l && j >= r) return m_tree[ind];
        
        //If outside of range
        if(r < i || l > j)return numeric_limits<T>::max();
        
        //Else segment overlaps others and return min minimum for child nodes
        T lNode = minimum(left(ind), l, mid(l, r), i, j), rNode = minimum(right(ind), mid(l, r) + 1, r, i, j);
        if(lNode == -1) return rNode;
        else if(rNode == -1) return lNode;
        else return min(lNode, rNode);
    }
    
    void update(long ind, long l, long r, long i, T val) {
        //If outside
        if(i < l || i > r) return;
        
        //If at leaf node
        if(l == r) {
            m_data[i] = val;
            m_tree[ind] = val;
            return;
        } 
        //Update current node and call for each child
        m_tree[ind] = min(m_tree[ind], val);
        update(left(ind), l, mid(l, r), i, val);
        update(right(ind), mid(l, r) + 1, r, i, val);
    }
    
public:
    SegmentTreeMin(T *data, long n) : m_data(data), m_len(n) {
        m_size = 2 * pow(2, ceil(log2(m_len)));// 2 times 2 ^ height of tree
        m_tree = new T[m_size];
        build(1, 0, m_len - 1);
    }
    
    ~SegmentTreeMin() {
        delete [] m_tree;
    }
    
    T minimum(long i, long j) {
        return minimum(1, 0, m_len - 1, i, j);
    }
    
    void update(long i, T val) {
        update(1, 0, m_len - 1, i, val);
    }
};

#endif /* SEGMENTTREEMIN_H */