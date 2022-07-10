class Solution {
    int t[1001];
public:
    int minCostClimbingStairs(vector<int>& cost) {
        memset(&t, -1, sizeof(t));
        int n = cost.size();
        return min(solve(cost, n - 1), solve(cost, n - 2));
    }
    int solve(const vector<int>& cost, int n) {
        if (t[n] != -1) return t[n];
        // base cond
        if (n < 0) return 0;
        if (n == 0) return cost[0];
        if (n == 1) return cost[1];
        return t[n] = min(solve(cost, n - 1), solve(cost, n - 2)) + cost[n];
    }
};