#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n;
       
        if (n == 1) {
            int temp; 
            cin >> temp; 
            cout << 0 << endl;
        } else {
            int m; 
            cin >> m;
           
            vector<vector<int>> mat(m, vector<int>(m)); 
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    cin >> mat[i][j];
                }
            }
            
            int min = 0;
            for (int i=0; )
        }
    }
   
    return 0;
}


