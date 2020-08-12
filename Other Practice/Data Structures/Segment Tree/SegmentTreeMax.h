#ifndef SEGMENTTREEMAX_H
#define SEGMENTTREEMAX_H

#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;

template<class T>
class SegmentTreeMax {
private:
    //Fields
    T *m_tree, *m_data;
    long m_len, m_size;
    
    //Index manipulation functions
    long parent(long ind) { return ind >> 1; }
    long left(long ind) { return ind << 1L; }
    long right(long ind) { return (ind << 1L) + 1; }
    long mid(long l, long r) { return l + (r - l) / 2;}
    
    //Recursive functions to build, lookup, and modify segment tree
    T build(long ind, long l, long r) {
        if(l == r) {
            return m_tree[ind] = m_data[l];
        } else {
            //Return max of child nodes
            return m_tree[ind] = max(build(left(ind), l, mid(l, r)), build(right(ind), mid(l, r) + 1, r));
        }
    }
    
    T maximum(long ind, long l, long r, long i, long j) {
        //If in range
        if(i <= l && j >= r) return m_tree[ind];
        
        //If outside of range
        if(r < i || l > j)return numeric_limits<T>::min();
        
        //Else segment overlaps others and return max of child nodes
        return max(maximum(left(ind), l, mid(l, r), i, j), maximum(right(ind), mid(l, r) + 1, r, i, j));
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
        //Update current node and children nodes
        m_tree[ind] = max(m_tree[ind], val);
        update(left(ind), l, mid(l, r), i, val);
        update(right(ind), mid(l, r) + 1, r, i, val);
    }
    
public:
    SegmentTreeMax(T *data, long n) : m_data(data), m_len(n) {
        //Allocate array
        m_size = 2 * pow(2, ceil(log2(m_len)));// 2 times 2 ^ height of tree
        m_tree = new T[m_size];
        build(1, 0, m_len - 1);
    }
    
    ~SegmentTreeMax() {
        delete [] m_tree;
    }
    
    T maximum(long i, long j) {
        return maximum(1, 0, m_len - 1, i, j);
    }
    
    void update(long i, T val) {
        update(1, 0, m_len - 1, i, val);
    }
};

#endif /* SEGMENTTREE_H */