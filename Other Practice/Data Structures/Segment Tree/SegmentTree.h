#ifndef SEGMENTTREE_H
#define SEGMENTTREE_H

#include <cmath>
#include <algorithm>
using namespace std;

template<class T>
class SegmentTree {
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
            //Get value of child nodes
            T lNode = build(left(ind), l, mid(l, r));
            T rNode = build(right(ind), mid(l, r) + 1, r);
            
            /*
             * Return value of this node, ex return m_tree[ind] = min(lNode, rNode); for min
             */
        }
    }
    T query(long ind, long l, long r, long i, long j) {
        //If in range
        if(i <= l && j >= r) return m_tree[ind];
        
        //If outside of range
        if(r < i || l > j)return -1;
        
        //Get value of left and right because segment overlaps others
        T lNode = query(left(ind), l, mid(l, r), i, j);
        T rNode = query(right(ind), mid(l, r) + 1, r, i, j);
        
        /*
         * Return best at this node like max or sum, ex return lNode + rNode; for sum
         */
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
        
        /*
         * Update current tree value based on val like add diff or set min, ex m_tree[ind] = min(m_tree[ind], val); or m_tree[ind] += val - m_data[i];
         */
        
        //Update children with value as well
        update(left(ind), l, mid(l, r), i, val);
        update(right(ind), mid(l, r) + 1, r, i, val);
    }
    
public:
    SegmentTree(T *data, long n, Type type = Type::Sum) : m_data(data), m_len(n), m_type(type) {
        m_size = 2 * pow(2, ceil(log2(m_len)));// 2 times 2 ^ height of tree
        m_tree = new T[m_size];
        build(1, 0, m_len - 1);
    }
    
    ~SegmentTree() {
        delete [] m_tree;
    }
    
    T query(long i, long j) {
        return query(1, 0, m_len - 1, i, j);
    }
    
    void update(long i, T val) {
        update(1, 0, m_len - 1, i, val);
    }
};

#endif /* SEGMENTTREE_H */