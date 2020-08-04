/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 11, 2020, 2:43 PM
 * Purpose: https://codeforces.com/problemset/problem/1167/B
 */

#include <bits/stdc++.h>
using namespace std;

/*



        Interactive Problem Must Be Spanish For Gay


*/


typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    vector<int> num = {4,8,15,16,23,42};
    vector<pii> v;
    int arr[6];

    //Make pairs
    for(int i = 0; i < num.size(); ++i) {
        for(int j = i + 1; j < num.size(); ++j) {
            v.push_back(make_pair(num[i], num[j]));
        }
    }
    
    //First
    int prod1;
    cout<<"? 1 2\n";
    cin>>prod1;
    
    int ind1 = -1;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first * v[i].second == prod1) {
            ind1 = i;
            break;
        }
    }


    //Second
    int prod2;
    cout<<"? 2 3\n";
    cin>>prod2;

    
    int ind2 = -1;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first * v[i].second == prod2) {
            ind2 = i;
            break;
        }
    }

    int val = 0;

    if(v[ind1].first == v[ind2].first) val = v[ind1].first;
    else if(v[ind1].first == v[ind2].second) val = v[ind1].first;
    else val = v[ind1].second;

    //Assign first 3 vals
    arr[1] = val;
    arr[0] = prod1 / val;
    arr[2] = prod2 / val;


    //Third
    cout<<"? 4 5\n";
    cin>>prod1;
    
    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first * v[i].second == prod1) {
            ind1 = i;
            break;
        }
    }


    //Second
    cout<<"? 5 6\n";
    cin>>prod2;

    
    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first * v[i].second == prod2) {
            ind2 = i;
            break;
        }
    }

    if(v[ind1].first == v[ind2].first) val = v[ind1].first;
    else if(v[ind1].first == v[ind2].second) val = v[ind1].first;
    else val = v[ind1].second;

    //Assign first 3 vals
    arr[4] = val;
    arr[3] = prod1 / val;
    arr[5] = prod2 / val;


    //Output answer
    cout<<"! ";
    for(int i = 0; i < 6; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //A Sebastian Production
    return 0;
}
