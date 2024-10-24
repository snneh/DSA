#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        
        int limit = 0;
        
        int turn = 0;
        while (limit <= n || limit >= (0-n)) {
            if (turn % 2 == 0) {
                limit -= ((2 * turn) - 1);
                if (limit > n || limit < (0-n)) {
                    cout << "Sakurako" << endl; break;
                } 
            } else {
                limit += ((2 * turn) - 1);
                if (limit > n || limit < (0-n)) {
                    cout << "Kosuke" << endl; break;
                }
            }
            turn++;
        }
    }
    

return 0;
}