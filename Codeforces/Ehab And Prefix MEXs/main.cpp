/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1364/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	//Declare variables
	int n = 0, *a = nullptr, *b = nullptr, num = 0, mex = 0;
	priority_queue<int, vector<int>, greater<int> > q;
	set<int> mexs;
	
	//Read in size and initialize arrays
	cin>>n;
	a = new int[n];
	b = new int[n];

	//Read in array of mexs
	for(int i = 0; i < n; ++i) {
		cin>>a[i];
		mexs.insert(a[i]);//Mark each future mex as currently unusable
	}


	
	//Create b array
	for(int i = 0; i < n; ++i) {
		//Get next possible num that is not future mex, add to pq and increment num
		while(mexs.count(num)) {
            ++num;
        }
        q.push(num++);

        //Get best num for b array from pq, pop from pq
        b[i] = q.top();
        q.pop();
        
        //Find mex		
        int tmp = (q.empty()) ? num : q.top();
        mex = min(tmp, *(mexs.begin()));

        //Add mex to pq and remove from u_set if no longer needed
        if(i < n - 1 && a[i] < a[i + 1]) {
            mexs.erase(mexs.find(a[i]));
            if(a[i] < num) q.push(a[i]);//Only push if mex < current num
        }

        //If mex != a[i] then exit func with bad seq
        if(mex != a[i]) {
            cout<<-1<<endl;
            return 0;
        }
    }

    //Output answer
    for(int i = 0; i < n; ++i) {
        cout<<b[i]<<" "; 
    }
    cout<<endl;


	//Deallocate memory
	delete [] a;
	delete [] b;

    //A Sebastian Production
	return 0;
}
