#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool helper(int n, string &temp) {
    if (to_string(n).length() == temp.length()) return false;

    temp += to_string(n % 10); 
    return helper(n / 10, temp);
}

void check(int n) {
    string temp = "";
    helper(n, temp);
    cout << "Result: " << temp << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: "; // Prompt for input
    cin >> n;
    cout << "Input read: " << n << endl; // Confirm input read
    check(n);
    
    return 0;
}
