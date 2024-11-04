#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t; 
    while (t--) {
        int n, k; 
        cin >> n >> k; 

        unordered_map<int, priority_queue<int>> brand_costs;

        for (int i = 0; i < k; i++) {
            int bottle, cost; 
            cin >> bottle >> cost;
            brand_costs[bottle].push(cost);
        }
        
        priority_queue<int> all_max_costs;
        for (auto& brand : brand_costs) {
            priority_queue<int>& costs = brand.second;
            int brand_sum = 0;
            while (!costs.empty()) {
                brand_sum += costs.top();
                costs.pop();
            }
            all_max_costs.push(brand_sum);
        }

        int total_cost = 0, count = 0;
        while (count < n && !all_max_costs.empty()) {
            total_cost += all_max_costs.top();
            all_max_costs.pop();
            count++;
        }

        cout << total_cost << endl;
    }

    return 0;
}
