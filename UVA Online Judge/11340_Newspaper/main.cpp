//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2315
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Declare variables
        int k = 0, n = 0, x = 0, total = 0;
        char c;
        string input;
        unordered_map<char, int> price, freq;

        //Map characters to prices, initialize frequency array
        cin>>k;
        for(int j = 0; j < k; ++j) {
            cin>>c>>x;
            freq[c] = 0;
            price[c] = x;
        }

        //Read in lines
        cin>>n;
        getline(cin, input);
        for(int j = 0; j < n; ++j) {
            getline(cin, input);

            for(char val : input) {
                if(freq.count(val)) {
                    ++freq[val];
                }
            }
        }

        //Total up price
        for(pair<char, int> p : freq) {
            total += price[p.first] * p.second;
        }

        //Output answer, but with iomanip???
        cout<<(total / 100)<<"."<<setw(2)<<setfill('0')<<(total % 100)<<"$\n";

    }

    //A Sebastian Production
    return 0;
}
