#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        
        if (n == 1) {
            int temp; cin >> temp; cout << 0 << endl;
        } else {
            int m; cin >> m; vector<int> mat;
            for (int i=0; i<m; i++) {
                for (int j=0; j<m; j++) {
                    cin >> mat[i][j];
                }
            }
        }
        
        int turn = 1;
        while (true) {
            if (turn % 2 != 0) {
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