//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=242&page=show_problem&problem=3238
#include <bits/stdc++.h>
using namespace std;

template<class T>
class SegmentTreeSum {
private:
    //Fields
    T *m_tree, *m_data;
    long m_len, m_size;
    
    //Private functions
    long parent(long ind) { return ind >> 1; }
    long left(long ind) { return ind << 1L; } 
    long right(long ind) { return (ind << 1L) + 1; }
    long mid(long l, long r) { return l + (r - l) / 2;}
    T build(long ind, long l, long r) {
        if(l == r) {
            return m_tree[ind] = m_data[l];
        } else {
            //Assign sum of child nodes to current and return it
            return m_tree[ind] = build(left(ind), l, mid(l, r)) + build(right(ind), mid(l, r) + 1, r);
        }
    }
    T sum(long ind, long l, long r, long i, long j) {
        //If in range
        if(i <= l && j >= r) return m_tree[ind];
        
        //If outside of range
        if(r < i || l > j)return 0;
        
        //Else segment overlaps others and return sum of child nodes
        return sum(left(ind), l, mid(l, r), i, j) + sum(right(ind), mid(l, r) + 1, r, i, j);
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
         m_tree[ind] +=  (val - m_data[i]);
        
        //Update children
        update(left(ind), l, mid(l, r), i, val);
        update(right(ind), mid(l, r) + 1, r, i, val);
    }
    
public:
    SegmentTreeSum(T *data, long n) : m_data(data), m_len(n) {
        m_size = 2 * pow(2, ceil(log2(m_len)));// 2 times 2 ^ height of tree
        m_tree = new T[m_size];
        build(1, 0, m_len - 1);
    }
    
    ~SegmentTreeSum() {
        delete [] m_tree;
    }
    
    T sum(long i, long j) {
        return sum(1, 0, m_len - 1, i, j);
    }
    
    void update(long i, T val) {
        update(1, 0, m_len - 1, i, val);
    }
};



int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, *arr = nullptr, cse = 0;
    bool presentationErrorsAreReallyStupid = false;

    while(cin>>n) {
        //Exit case
        if(!n) break;

        //Read in data
        arr = new int[n];
        for(int i = 0; i < n; ++i) cin>>arr[i];

        //Create segment tree
        SegmentTreeSum<int> st(arr, n);

        //Read in action and do action
        string str = "";
        int a = 0, b = 0;
        if(presentationErrorsAreReallyStupid) cout<<"\n";
        cout<<"Case "<<(++cse)<<":\n";
        while(cin>>str) {
            //Exit case
            if(str == "END") break;

            cin>>a>>b;

            if(str == "S") {
                st.update(a - 1, b);
            } else {
                cout<<st.sum(a - 1, b - 1)<<endl;
            }
        }
        presentationErrorsAreReallyStupid = true;
    }
    return 0;
}
