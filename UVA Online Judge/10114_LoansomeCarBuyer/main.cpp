//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1055

#include <bits/stdc++.h>
using namespace std;

int main() {
    double months = 0, down= 0, amnt = 0, intervals = 0;

    //For each loan, while loan term is positive
    while(cin>>months>>down>>amnt>>intervals) {
        if(months < 0) break;

        double percent = 0.0, worth = amnt + down, payment = amnt / months;
        int ans = -1;
        queue<pair<double, double> > v;

        //Read in depreciation intervals
        for(int i = 0; i < intervals; ++i) {
            double x, y;
            cin>>x>>y;
            v.push(make_pair(x, y));
        }

        //Simulate each month
        for(int i = 0; i < months; ++i) {
            //Check for new level of depreciation
            if(!v.empty() && v.front().first == i) {
               percent = v.front().second;
               v.pop();
            }
            
            //Apply depreciation
            worth *= (1 - percent);
            
            //Remove payment from amount
            if(i > 0)
                amnt -= payment;

            //Check for answer
           if(ans == -1 && amnt < worth) {
                ans = i;
           }
        }
        
        //Output answer
        if(ans == 1) {
            cout<<"1 month"<<endl;
        } else {
            cout<<ans<<" months"<<endl;
        }
    }
    //A Sebastian Production
    return 0;
}
