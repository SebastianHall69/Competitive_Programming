/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 28, 2020, 2:58 AM
 * Purpose: To make us look less bad at last years icpc (2019 Southern California Regional)
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct BigDick {
    ll base;
    vector<ll> data;
    
    BigDick() {
        base = 10;
        data.push_back(0);
    }
    
    BigDick(ll num, ll b = 10) {
        base = b;
        do {
            data.push_back(num % base);
            num /= base;
        } while(num);
    }
    
    BigDick operator+(const BigDick &obj) {
        BigDick tmp(0, base);
        ll carry = 0;
        
        tmp.data.resize(data.size());
        for(ll i = 0; i < data.size(); ++i) {
            ll val = (this->data[i] + obj.data[i] + carry);
            tmp.data[i] = val % base;
            carry = val / base;
        }
        
        if(carry) tmp.data.push_back(carry);
        
        return tmp;
    }
    
    void operator=(const BigDick &obj) {
        data.clear();
        for(int i = 0; i < obj.data.size(); ++i)
            data.push_back(obj.data[i]);
    }
    
    friend ostream& operator<<(ostream &strm, const BigDick &obj) {
        for(vector<ll>::const_reverse_iterator itr = obj.data.crbegin(); itr < obj.data.crend(); ++itr)
            strm<<(*itr)<<" ";
        return strm;
    }
    
    BigDick reverse() {
        BigDick tmp(0, base);
        tmp.data.resize(data.size());
        int ind = 0;
        for(vector<ll>::reverse_iterator itr = this->data.rbegin(); itr < this->data.rend(); ++itr) {
            tmp.data[ind++] = *itr;
        }
        
        return tmp;
    }
};

bool isPal(const BigDick &);




int main() {
    ll base = 0LL, num = 0LL;
    
    while(cin>>base>>num) {
        int ans = 0;
        BigDick bd(num, base);
        
        while(!isPal(bd) && ans <= 500) {
            bd = bd + bd.reverse();
            ++ans;
        }
        cout<<((ans > 500) ? ">500" : to_string(ans) + " " + to_string(bd.data.size()))<<endl;
    }
    
    //A Sebastian Production
    return 0;
}

bool isPal(const BigDick &obj) {
    for(int i = 0, mid = obj.data.size() / 2, end = obj.data.size() - 1; i < mid; ++i)
        if(obj.data[i] != obj.data[end - i]) return false;
    
    return true;
}