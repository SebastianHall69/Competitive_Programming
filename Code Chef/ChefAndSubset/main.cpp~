/*https://www.codechef.com/problems/CHEFSETC*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        bool flag = false;
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

        for(int j = 1, lim = 1<<4; j < lim; ++j) {
            int sum = 0;
            for(int k = 0; k < 4; ++k) {
                if(j & (1<<k)) {
                    sum +=arr[k];
                }
            }
           
            if(sum == 0) {
                flag = true;
                break;
            }
        }
        
        cout<<(flag ? "Yes\n" : "No\n");
    }

    //A Sebastian Production
    return 0;
}
