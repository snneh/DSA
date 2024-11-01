#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void generate(int num) {
    vector<vector<int>> mat(num);

    for (int i=0; i<num; i++) {
        mat[i].resize(i + 1);
        for (int j=0; j<=i; j++) {
            if (j == 0 || j == i) mat[i][j] = 1;
            else {
                mat[i][j] = (mat[i-1][j] + mat[i-1][j-1]);
            }
        } 
    }

    for  (const auto &c : mat) {
        for (int d : c) {
            cout <<  d << " ";
        }
        cout << endl;
    }
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    generate(n);
    
 

    return 0;
}