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
           
            vector<vector<int>> mat; 
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    int temp; cin >> temp;
                    mat[i][j] = temp;
                }
                
            }
            
            int count = 0;
            for (int i = 0; i < m-1; i++) {
                for (int j = 0; j < m-1; j++) {
                    if (mat[i][j] < 0 || mat[i+1][j+1] < 0) {
                        while (mat[i][j] < 0 || mat[i+1][j+1] < 0) {
                            mat[i][j]++; 
                            mat[i+1][j+1]++; 
                            count++;
                        }
                    }
                }
            }
            cout << count << endl;
        }
    }
   
    return 0;
}