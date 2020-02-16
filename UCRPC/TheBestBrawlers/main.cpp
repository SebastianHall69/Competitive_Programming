#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[]) {
    ll n = 0LL;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        ll b, t, sum = 0;
        pair<string, ll> high;
        high.second = -1LL;
        
        cin>>b>>t;
        
        for(ll j = 0; j < b; ++j) {
            string s;
            ll dmg, delay, interval, time, dmgDone;
            cin.ignore();
            cin>>s>>dmg>>delay>>interval;
            
            //Remove initial time delay
            time = t - delay;
            
            //Calculate damage
            dmgDone = dmg * (1 + time / interval);
            
            //Set highest
            if(dmgDone > high.second) {
                high.first = s;
                high.second = dmgDone;
            }
            
            //Add to total
            sum += dmgDone;
        }
        
        //Output results of each
        cout<<high.first<<" "<<high.second<<endl<<sum<<endl;
    }
    return 0; 
}