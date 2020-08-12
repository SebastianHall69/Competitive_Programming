#ifndef SEGMENTTREE_H
#define SEGMENTTREE_H

#include <cmath>
#include <algorithm>
using namespace std;

//Enum to specify segment tree type
enum Type {
    Sum = 0,
    Min = 1,
    Max = 2
};

template<class T>
class SegmentTree {
private:
    //Fields
    T *m_tree;                                          //Array for tree
    T *m_data;                                          //Data array used to construct tree
    long m_len;                                         //Length of data array
    long m_size;                                        //Size of m_tree
    Type m_type;                                        //Type of operations
    
    //Private functions
    long parent(long ind) { return ind >> 1; }          //Parent of ind
    long left(long ind) { return ind << 1L; }           //Left child
    long right(long ind) { return (ind << 1L) + 1; }    //Right child
    long mid(long l, long r) { return l + (r - l) / 2;} //Midpoint between points
    T build(long ind, long l, long r) {              //Create tree according to type
        if(l == r) {
            return m_tree[ind] = m_data[l];
        } else {
            //Get value of child nodes
            T lNode = build(left(ind), l, mid(l, r));
            T rNode = build(right(ind), mid(l, r) + 1, r);
            
            //Build based on type
            if(m_type == Type::Sum) {                    //For range sum queries
                return m_tree[ind] = lNode + rNode;
            } else if(m_type == Type::Min) {             //For range min queries
                return m_tree[ind] = min(lNode, rNode);
            } else {                                    //For range max queries
                return m_tree[ind] = max(lNode, rNode);
            }
        }
    }
    T query(long ind, long l, long r, long i, long j) {
        //If in range
        if(i <= l && j >= r) return m_tree[ind];
        
        //If outside of range
        if(r < i || l > j)return -1;
        
        //Else segment overlaps others
        T lNode = query(left(ind), l, mid(l, r), i, j);
        T rNode = query(right(ind), mid(l, r) + 1, r, i, j);
        if(m_type == Type::Sum) {
            return (lNode == -1 ? 0 : lNode) + (rNode == -1 ? 0 : rNode);
        } else if(m_type == Type::Min) {
            if(lNode == -1) return rNode;
            else if(rNode == -1) return lNode;
            return min(lNode, rNode);
        } else {
            return max(lNode, rNode);
        }
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
        
        //Update current node based on type
        if(m_type == Type::Sum) {
            m_tree[ind] +=  (val - m_data[i]);
        } else if(m_type == Type::Min) {
            m_tree[ind] = min(m_tree[ind], val);
        } else {
            m_tree[ind] = max(m_tree[ind], val);
        }
        
        //Update children
        update(left(ind), l, mid(l, r), i, val);
        update(right(ind), mid(l, r) + 1, r, i, val);
    }
    
public:
    SegmentTree(T *data, long n, Type type = Type::Sum) : m_data(data), m_len(n), m_type(type) {
        //Allocate array
        m_size = 2 * pow(2, ceil(log2(m_len)));// 2 times 2 ^ height of tree
        m_tree = new T[m_size];
        
        //Build array
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
