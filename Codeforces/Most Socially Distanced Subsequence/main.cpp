/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1364/problem/B
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	//Declare variables
	int t = 0;

	cin>>t;

	for(int i = 0; i < t; ++i) {
		//Declare variables
		int n = 0, *arr = nullptr;
		vector<int> ans;

		//Read in array
		cin>>n;
		arr = new int[n];
		for(int j = 0; j < n; ++j) cin>>arr[j];

		//Find values with the biggest gap
		ans.push_back(arr[0]);
		for(int j = 1; j < n - 1; ++j) {
			if((arr[j] < arr[j - 1] && arr[j] < arr[j + 1]) || (arr[j] > arr[j - 1] && arr[j] > arr[j + 1])) {
				ans.push_back(arr[j]);
			}
		}
		ans.push_back(arr[n - 1]);

		//Output answer
		cout<<ans.size()<<endl;
		for(int j = 0; j < ans.size(); ++j) cout<<ans[j]<<" ";
		cout<<endl;

		//Deallocate array
		delete [] arr;
	}

	return 0;
}
