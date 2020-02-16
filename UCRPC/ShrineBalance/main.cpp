/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 2:25 PM
 * Purpose: 
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, *arr1, *arr2, sum1 = 0, sum2 = 0, ind1 = 0, ind2 = 0;
        
        cin>>n;
        arr1 = new int[n];
        arr2 = new int[n];
        ind1 = ind2 = n - 1;
        
        //Read in arrays, add up sums
        for(int i = 0; i < n; ++i) { cin>>arr1[i]; sum1 += arr1[i]; }
        for(int i = 0; i < n; ++i) { cin>>arr2[i]; sum2 += arr2[i]; }
        
        bool flag = false;
        while(ind1 >= 0 && ind2 >= 0) {
            if(sum1 > sum2) {
                sum1 -= arr1[ind1--];
            } else if(sum2 > sum1) {
                sum2 -= arr2[ind2--];
            } else {
                flag = true;
                break;
            }
        }
        
        //Output results
        if(flag) {
            //First index
            if(ind1 < n - 1) cout<<ind1 + 1<<" ";
            else cout<<"-1"<<" ";
            
            //Second index
            if(ind2 < n - 1) cout<<ind2 + 1<<endl;
            else cout<<"-1"<<endl;
        } else {//Else it is not possible to balance stacks
            cout<<"Impossible"<<endl;
        }
        
        
        delete [] arr1;
        delete [] arr2;
    }

    //A Sebastian Production
    return 0;
}