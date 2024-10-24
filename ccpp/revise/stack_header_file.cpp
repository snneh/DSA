#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> new_stack;

    new_stack.push(5);
    new_stack.push(4);
    new_stack.push(8);
    new_stack.push(1);

    cout << new_stack.top();


    return 0;
}