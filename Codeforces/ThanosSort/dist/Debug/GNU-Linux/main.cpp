/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 7, 2020, 2:03 PM
 * Purpose: http://codeforces.com/contest/1145/problem/A
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    int *one, *two;
    int sortCount = 0;
    int fSorted  = 0, bSorted = 0;
    
    //Read in array size and create/fill array
    cin>>n;
    one = new int[n];
    for(int i = 0; i < n; ++i)
        cin>>one[i];
    
    //Loop while not sorted
    while(!is_sorted(one, one + n)) {//While the array isn't sorted
        //Check amount sorted in first half
        sortCount = 1;
        for(int i = 0; i < n / 2 - 1; ++i) {
            if(one[i] <= one[i + 1]) {
                ++sortCount;
            } else {
                fSorted = (sortCount > fSorted) ? sortCount : fSorted;
                sortCount = 1;
            }
        }
        //Get max sorted from front half of array
        fSorted = (sortCount > fSorted) ? sortCount : fSorted;
        
        //Check amount sorted in second half
        sortCount = 1;
        for(int i = n / 2; i < n - 1; ++i) {
            if(one[i] <= one[i + 1]) {
                ++sortCount;
            } else {
                bSorted = (sortCount > bSorted) ? sortCount : bSorted;
                sortCount = 1;
            }
        }
        //Get max sorted from back half of array
        bSorted = (sortCount > bSorted) ? sortCount : bSorted;
        
        //Split array into side with most sorted
        n /= 2;
        two = new int[n];
        if(fSorted > bSorted)
            for(int i = 0; i < n; ++i) 
                two[i] = one[i];
        else
            for(int i = 0; i < n; ++i)
                two[i] = one[i + n];
        
        //Set two array back into one
        delete [] one;
        one = two;
    }
    
    //Output result
    cout<<n<<endl;
    
    //Deallocate memory
    delete [] two;

    //A Sebastian Production
    return 0;
}

