#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void reverse(stack<int> &newstack) {
    if (newstack.empty()) return;

    int top = newstack.top();
    newstack.pop();
    reverse(newstack);
    
    stack<int> temp;
    while(!newstack.empty()) {
        temp.push(newstack.top());
        newstack.pop();
    }

    newstack.push(top);
    while (!temp.empty()) {
        newstack.push(temp.top());
        temp.pop();
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> newstack;
    newstack.push(1);
    newstack.push(2);
    newstack.push(3);
    newstack.push(4);
    newstack.push(5);


    reverse(newstack);



    while (!newstack.empty()) {
        cout << newstack.top() << endl;
        newstack.pop();
    }


    

return 0;
}