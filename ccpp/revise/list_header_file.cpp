#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void display(list<int> &lst) {
    list<int> :: iterator it;

    for (it=lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    list<int> list1;  //* list  of 0 length
    //list<int> list2(7);   //* empty list of size 7
    
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(12);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(9);
    
    // list<int> :: iterator it;
    // it = list1.begin();   //* iterator pointing to list's 
    //                       //* first element
    // cout << *it << " ";
    // it++;
    // cout << *it;

    display(list1);
   
    list1.pop_front();
    cout << endl;
    display(list1);
    list1.remove(9);   //* removes all occurances of 9
    cout << endl;
    display(list1);
    cout << endl;

    list1.sort();
    display(list1);

    //~ list1.merge(list2);
    //~ list1.reverse();



return 0;
}