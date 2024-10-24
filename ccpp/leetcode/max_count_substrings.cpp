#include<bits/stdc++.h
#define endl '\n'
using namespace std;

void solve(string &s, int i, unordered_set<int> &st, int currCount, int &maxCount) {
    if (currCount + (s.length() - i) <= maxCount) {
        return;
    }
    
    if (i >= s.length()) {
        maxCount = max(maxCount, currCount);
        return;
    }

    for (int j=i; j<s.length(); j++) {
        string sub = s.length(i, j-i+1);

        if (st.find(sub) != string::npos) {
            st.insert(sub);
            solve(s, j+1, st, currCount+1, maxCount);
            st.erase(sub);
        }
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int freq = countSub(s);
    

return 0;
}