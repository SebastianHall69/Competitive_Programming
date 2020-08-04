#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;//Number of cases
        set<int> diff;//Holds diff between numbers, sorted least -> greatest
        
        //While number to read in
	while(cin>>n) {
            bool jolly = true;
            int prev = 0, cur = 0;
            cin>>prev;
            
            //Default case, jolly because only one
            if(n == 1){
                cout<<"Jolly"<<endl;
            }
            else {
                //Find difference between sequential numbers, push to set for only unique
                for(int i = 0; i < n - 1; ++i) {
                        cin>>cur;
                        diff.insert(abs(cur - prev));
                        prev = cur;
                }
                
                //Default not jolly if set does not hold correct size to be jolly
                if(diff.size() != n - 1)
                    jolly = false;
                else {//Else check each element to see if it matches [1 - n-1]
                    int val = 1;
                    for(set<int>::const_iterator itr = diff.cbegin(); itr != diff.cend(); ++itr) {
                        if(val != *itr) {
                            jolly = false;
                            itr = diff.cend();
                            --itr;
                        }
                        ++val;
                    }
                }
                
                //Output results and clear set
                cout<<((jolly) ? "Jolly" : "Not jolly") <<endl;
                diff.clear();
            }

	}
	return 0;
}