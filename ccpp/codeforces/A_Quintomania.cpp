#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n; vector<int> arr(n);

        for (int i=0; i<n; i++) cin >> arr[i];


        bool flag = 1;  //flag = true;

        for (int i=0; i<n-1; i++) {
            if (abs(arr[i+1] - arr[i]) != 5 && abs(arr[i+1] - arr[i]) != 7 ) {
                flag = 0;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    

    return 0;
}